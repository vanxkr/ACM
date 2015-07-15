declare @QQNum int = 790938860
declare @sql varchar(8000)
declare @dbIdx int = 1

-- Author:	 <��ɽѩ��>
-- Email:	 <easy66@live.com>
-- Create date: <2013-11-21>
-- Description:	<����QQ�ţ����������Ⱥ>
-- Note:        <��֧�ֳ���int���ȵ�QQ��>

if OBJECT_ID('tempdb.dbo.#QunList') is not null
drop table #QunList
if OBJECT_ID('tempdb.dbo.#QunDetail') is not null
drop table #QunDetail

create table #QunList
(
QQNum int,
Nick varchar(20),
Age int,
Gender int,
Auth int,
QunNum int,
Title varchar(22),
QunText varchar(80)
)
create table #QunDetail
(
QunNum int,
Title varchar(22),
QunText varchar(80)
)

-- Search QunList

while @dbIdx <= 11
begin
declare @tblIdx int = 1
declare @tblName varchar(50)

while @tblIdx <= 100
begin
set @tblName = 'GroupData' + CONVERT(varchar(2), @dbIdx) + '.dbo.Group'
set @tblName += CONVERT(varchar(5), (@dbIdx - 1) * 100 + @tblIdx)

set @sql = 'select QQNum, Nick, Age,Gender, Auth, QunNum from '
set @sql += @tblName + ' where QQNum=' + CONVERT(varchar(15), @QQNum)

insert into #QunList(QQNum, Nick,Age,Gender,Auth,QunNum)  exec(@sql)

print @tblname + ' OK'

set @tblIdx += 1
end

set @dbIdx += 1
end

-- Search QunDetail

declare @QunNum int
declare cur_Qun cursor 
for select QunNum from #QunList

open cur_Qun
fetch next from cur_Qun into @QunNum

while @@FETCH_STATUS = 0
begin
set @sql = 'select QunNum,Title,QunText from QunInfo' + CONVERT(varchar(5), @QunNum / 10000000 + 1) + '.dbo.'
set @sql += 'QunList' + CONVERT(varchar(10), @QunNum / 1000000 + 1) + ' where QunNum=' + Convert(varchar(20),@QunNum)

insert into #QunDetail exec(@sql)

fetch next from cur_Qun into @QunNum
end

close cur_Qun
deallocate cur_Qun

-- combine QunList with QunDetail

update #QunList set Title = #QunDetail.Title,QunText=#QunDetail.QunText 
from #QunDetail
where #QunList.QunNum = #QunDetail.QunNum

select * from #QunList