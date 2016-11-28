#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;



int function(int category,int sub1, int sub2)
{
    int code,store_n, product_n;
    cout<<"\nPlease enter the Store number(two digits)\t";
    cin>>store_n;
    cout<<"\nPlease enter the product number(two digits)\t";
    cin>>product_n;
    code=category*1000000+sub1*100000+sub2*10000+store_n*100+product_n;

    return code;
}
int main()
{
    int code=0,category,sub1,sub2;
    cout<<"\t\t\tCode Generation"<<endl;
    cout<<"\n\n\t\tPlease choose the appropriate number"<<endl;
    cout<<"\n1.Books\n2.Fashion\n3......."<<endl;
    cin>>category;

switch (category)
{

  case 1:
     cout<<"\nPlease choose the type of book"<<endl;
     cout<<"\n1.english\n2.hindi\n3.nepali\n4.other"<<endl;
     cin>>sub1;

     sub2=0; //kina vanda book ko sub category hudaina
     break;
  case 2:
     cout<<"\nPlease choose from the following"<<endl;
     cout<<"\n1.Men's fashion\n2.Women's fashion\n3.Kids"<<endl;
     cin>>sub1;
     switch (sub1)
     {
         case 1:
         cout<<"please select from the following"<<endl;
         cout<<"1.Pant\n2.Shirt\n3.T-shirt\n4......."<<endl;
         cin>>sub2;
         break;

         case 2:
         cout<<"1.Pant\n2.T shirt\n3.Inner\n4.Jewwllery\n5. .........."<<endl; //thapna ko lagi ....
         cin>>sub2;
         break;

         case 3:
         cout<<"1.Pant\n2.Shirt\n3.T-shirt\n4......."<<endl;
         cin>>sub2;

         default:
            cout<<"Invalid input. Sorry"<<endl;

     }
     break;


  default:
     cout<<"Invalid input. Sorry"<<endl;

}


code=function(category, sub1, sub2);
cout<<"The Product Code is "<<code<<endl;

return 0;
}

