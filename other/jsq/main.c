/* ������ calc.c */
#include <gtk/gtk.h>
#include <stdlib.h>
static GtkWidget *entry; //���嵥������ؼ�����ʾ�������������
gint count = 0 ; //��λ
gdouble nn = 0 ; //����һ
gdouble mm = 0 ; //������
gint s = 0 ; //�㷨
gboolean first = TRUE; //�״�����
gboolean have_dot = FALSE; //�Ƿ���С����
gboolean have_result = FALSE; //�Ƿ��н�����
gchar number[100]; //�����û����������
void clear_all (void)
{
    //���������ر��
    gint i;
    gtk_entry_set_text(GTK_ENTRY(entry),"");
    nn = 0;
    mm = 0 ;
    s = 0;
    count = 0 ;
    first = TRUE;
    have_dot = FALSE;
    have_result = FALSE;
    for(i = 0 ; i < 100 ; i++)
        number[i] = '\0';
}
void on_num_clicked (GtkButton* button,gpointer data)
{
    //������������ʱִ��
    const gchar *num;
    gint i;
    if(have_result)
        clear_all();//�н����ȫ�����
    if(count == 6) return; //��6λ����������������
    count++;
    num = gtk_button_get_label(GTK_BUTTON(button));//ȡ��
    i = g_strlcat(number,num,100);//����
    if(first)
        nn = strtod(number,NULL);//��һ
    else
        mm = strtod(number,NULL);//����
    gtk_entry_set_text(GTK_ENTRY(entry),number);//��ʾ
}
void on_dot_clicked (GtkButton* button,gpointer data)
{
    //��С���㰴��ʱ
    gint i;
    if(have_result)
        clear_all();//ȫ�����
    if(have_dot == FALSE) //�����С���������
    {
        have_dot = TRUE;
        i = g_strlcat(number,".",100);
        gtk_entry_set_text(GTK_ENTRY(entry),number);
    }
//�����С���������
}
void on_clear_clicked (GtkButton* button,gpointer data)
{
    clear_all();//ȫ�����
}
void on_suan_clicked (GtkButton* button,gpointer data)
{
    //�����㰴ť +��-��*��/ ����ʱ
    gint i;
    switch(GPOINTER_TO_INT(data))
    {
    case 1: //"+"
        s = 1;
        gtk_entry_set_text(GTK_ENTRY(entry),"");
        first = FALSE ;
        count = 0;
        break;
    case 2: //"-"
        s = 2;
        gtk_entry_set_text(GTK_ENTRY(entry),"");
        first = FALSE ;
        count = 0;
        break;
    case 3: //"*"
        s = 3;
        gtk_entry_set_text(GTK_ENTRY(entry),"");
        first = FALSE ;
        count = 0;
        break;
    case 4: //"/"
        s = 4;
        gtk_entry_set_text(GTK_ENTRY(entry),"");
        first = FALSE ;
        count = 0;
        break;
    }
    have_dot = FALSE;
    for(i = 0 ; i < 100 ; i++) //�������
        number[i] = '\0';
}
void on_eq_clicked (GtkButton* button,gpointer data)
{
    //���Ⱥż���ť����ʱ
    double numb;
    gchar num[100];
    gchar *result;
    switch(s)
    {
    case 1: //"+"
        numb = nn+mm;
        break;
    case 2: //"-"
        numb = nn-mm;
        break;
    case 3: //"*"
        numb = nn*mm;
        break;
    case 4: //"/"
        numb = nn/mm;
        break;
    }
    result = g_ascii_dtostr(num,100,numb);
    gtk_entry_set_text(GTK_ENTRY(entry),result);
    have_result = TRUE;
}
int main ( int argc , char* argv[])
{
    GtkWidget *window;
    GtkWidget *vbox;
    GtkWidget *hbox,*hbox1,*hbox2,*hbox3,*hbox4;
    GtkWidget *button;
    GtkWidget *label;
    gtk_init(&argc,&argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(G_OBJECT(window),"delete_event",
                     G_CALLBACK(gtk_main_quit),NULL);
    gtk_window_set_title(GTK_WINDOW(window),"������");
    gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
    gtk_container_set_border_width(GTK_CONTAINER(window),10);
    vbox = gtk_vbox_new(FALSE,0);
    gtk_container_add(GTK_CONTAINER(window),vbox);
    hbox = gtk_hbox_new(FALSE,0);
    gtk_box_pack_start(GTK_BOX(vbox),hbox,FALSE,FALSE,5);
    label = gtk_label_new("Calculator");
    gtk_box_pack_start(GTK_BOX(hbox),label,TRUE,TRUE,5);
    button = gtk_button_new_with_label("C");
    gtk_box_pack_start(GTK_BOX(hbox),button,TRUE,TRUE,5);
    g_signal_connect(G_OBJECT(button),"clicked",
                     G_CALLBACK(on_clear_clicked),NULL);
    entry = gtk_entry_new();
    gtk_widget_set_direction(entry,GTK_TEXT_DIR_RTL);
    gtk_box_pack_start(GTK_BOX(vbox),entry,FALSE,FALSE,5);
    hbox1 = gtk_hbox_new(FALSE,0);
    gtk_box_pack_start(GTK_BOX(vbox),hbox1,FALSE,FALSE,5);
    button = gtk_button_new_with_label("3");
    gtk_box_pack_start(GTK_BOX(hbox1),button,TRUE,TRUE,5);
    g_signal_connect(G_OBJECT(button),"clicked",
                     G_CALLBACK(on_num_clicked),NULL);
    button = gtk_button_new_with_label("2");
    gtk_box_pack_start(GTK_BOX(hbox1),button,TRUE,TRUE,5);
    g_signal_connect(G_OBJECT(button),"clicked",
                     G_CALLBACK(on_num_clicked),NULL);
    button = gtk_button_new_with_label("1");
    gtk_box_pack_start(GTK_BOX(hbox1),button,TRUE,TRUE,5);
    g_signal_connect(G_OBJECT(button),"clicked",
                     G_CALLBACK(on_num_clicked),NULL);
    button = gtk_button_new_with_label("+");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_suan_clicked),(gpointer)1);
    gtk_box_pack_start(GTK_BOX(hbox1),button,TRUE,TRUE,5);
    hbox2 = gtk_hbox_new(FALSE,0);
    gtk_box_pack_start(GTK_BOX(vbox),hbox2,FALSE,FALSE,5);
    button = gtk_button_new_with_label("6");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_num_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox2),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label("5");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_num_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox2),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label("4");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_num_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox2),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label("-");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_suan_clicked),(gpointer)2);
    gtk_box_pack_start(GTK_BOX(hbox2),button,TRUE,TRUE,5);
    hbox3 = gtk_hbox_new(FALSE,0);
    gtk_box_pack_start(GTK_BOX(vbox),hbox3,FALSE,FALSE,5);
    button = gtk_button_new_with_label("9");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_num_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox3),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label("8");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_num_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox3),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label("7");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_num_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox3),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label("*");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_suan_clicked),(gpointer)3);
    gtk_box_pack_start(GTK_BOX(hbox3),button,TRUE,TRUE,5);
    hbox4 = gtk_hbox_new(FALSE,0);
    gtk_box_pack_start(GTK_BOX(vbox),hbox4,FALSE,FALSE,5);
    button = gtk_button_new_with_label("0");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_num_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox4),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label(".");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_dot_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox4),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label("=");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_eq_clicked),NULL);
    gtk_box_pack_start(GTK_BOX(hbox4),button,TRUE,TRUE,5);
    button = gtk_button_new_with_label("/");
    g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(on_suan_clicked),(gpointer)4);
    gtk_box_pack_start(GTK_BOX(hbox4),button,TRUE,TRUE,5);
    gtk_widget_show_all(window);
    gtk_main();
    return FALSE;
}
