#include<iostream>
using namespace std;
 char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 int row,col;
 char token='x';
 bool tie=false;
 string n1="",n2="";
void function1()
{



    
      


      cout<<"   |     |  \n";
      cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"   | "<<space[0][2]<<"  \n";
      cout<<"___|_____|__\n";
      cout<<"   |     |  \n";
      cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"   | "<<space[1][2]<<"  \n";
      cout<<"___|_____|__\n";
      cout<<"   |     |  \n";
      cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"   | "<<space[2][2]<<"  \n";
      cout<<"   |     |  \n";
}
void function2()
{
int digit;
  if(token=='x')
  {
  cout<<n1<<" Please Enter :";
  cin>>digit;


  }
   if(token=='0')
  {
  cout<<n2<<" Please Enter :";
  cin>>digit;


  }
 if(digit==1){
     row=0;
     col=0;
 }
 if(digit==2){
     row=0;
     col=1;
 }
  if(digit==3){
     row=0;
     col=2;
 }
  if(digit==4){
     row=1;
     col=0;
 }
  if(digit==5){
     row=1;
     col=1;
 }
  if(digit==6){
     row=1;
     col=2;
 }
  if(digit==7){
     row=2;
     col=0;
 }
  if(digit==8){
     row=2;
     col=1;
 }
  if(digit==9){
     row=2;
     col=2;
 }
 else{
     cout<<"Invalid !!!\n";
 }
 if(token=='x' && space[row][col]!='x' && space[row][col]!='0')
 {
     space[row][col]='x';
     token='0';
 }
 else if(token=='0' && space[row][col]!='x' && space[row][col]!='0')
 {
    space[row][col]='0';
     token='x'; 
 }
 else if(digit<1 || digit>9)

 {
     cout<<"There is no empty space\n";
     function2();
 }
function1();
}
bool function3()
{
    for(int i=0;i<3;i++)
    {
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
         return true;

    }
    if(space[0][0] == space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
     return true;

     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             if(space[i][j]!='x' && space[i][j]!='0')
              return false;
         }
     }
     tie=true;
     return false;
}
int main()
{

  cout<<"Enter The Name of the First Player: \n";
     getline(cin,n1);
    cout<<"Enter The Name of the Second Player: \n";
     getline(cin,n2); 
     cout<<n1<<" is player1 so he/she will play first\n";
      cout<<n2<<" is player2 so he/she will play second\n";
       
    
  while(!function3())
 {
     function1();
     function2();
     function3();
 }
 if(token=='x' && !tie)
 {
     cout<<n2<<" wins\n";
 }
else if(token=='0' && !tie)
  cout<<n1<<" wins\n";
else cout<<"its Draw!!\n";
  

   cout<<"DO you want play again y/n \n";
 
 

}