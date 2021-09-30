## UVA272_TEX_Quotes_13
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
------
Use getline to input the value
```c++
while(getline(cin,in1))
{
  .....
  
  
if(count%2==1)
{
  cout<<"``";
}
else if(count%2==0) //짝수 밑에 모양; 
{
  cout<<"''";
}
.....
```
----
+ int count <- check odd times '"' or even times '"'.
+ else -> print the initial values.
