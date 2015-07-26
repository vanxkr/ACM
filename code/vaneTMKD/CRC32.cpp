#include "CRC32.h"

unsigned long Crc32Table[256];

int unsignedStrlen(unsigned char *strIn)
{
    unsigned char *p = strIn;
    while(*p++ != '\0');
    return p - strIn - 1;
}
void MakeTable()
{
    int i,j;
    unsigned long crc;
    for (i = 0; i < 256; i++){
        crc = i;
        for (j = 0; j < 8; j++){
            if (crc & 1)
                crc = (crc >> 1) ^ 0xEDB88320;
            else
                crc >>= 1;
        }
        Crc32Table[i] = crc;
    }
}
int GetCrc(unsigned char* csData, unsigned long dwSize)
{
    unsigned long crc  = 0xffffffff;
    int len;
    unsigned char* buffer;
    len = dwSize;
    buffer = csData;
   
    while(len--){
       crc = (crc >> 8) ^ Crc32Table[(crc & 0xFF) ^ *buffer++];
    }
    return crc^0xffffffff;
}