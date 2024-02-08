 //Selection Homework 1

//Problem #1: Arithmetic


 #include <iostream>

using namespace std;

int main()
{
int a , b;
cout<<" enter your numbers\n";
cin>>a >> b;
  bool  is_a_even (a % 2 == 0);
  bool is_b_even (b %2 == 0);

if (!is_a_even && !is_b_even)
    cout<< a*b<<endl;

    else if (is_a_even && is_b_even)
        cout<< a/b <<endl;

    else if (!is_a_even && is_b_even)
        cout<< a+b<<endl;

    else if (is_a_even && !is_b_even)
        cout<< a-b<<endl;

    return 0;
}


//Problem #2: Sort 3 numbers

#include <iostream>

using namespace std;

int main()
{
    int a ,b ,c ,temp;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b){
        temp=a;
    a=b;
    b=temp;

}


    if (b>c){
        temp=b;
        b=c;
        c=temp;
}
 if (a>b){
        temp=a;
    a=b;
    b=temp;

}
    cout<<a<<" "<< b<< " "<< c<<" ";

       return 0;
}



//Problem #3: Maximum but constrained


#include <iostream>

using namespace std;

int main()
{
     int a ,b ,c;
    cin>>a;
    cin>>b;
    cin>>c;

     if (a>100 && b>100 && c>100)
        cout<<"-1\n";

        else if (a>b && a>c)
            cout<<a;

         else if (b>c && b>a)
            cout<<b;

        else if (c>b && c>a)
            cout<<c;

        return 0;
}


//Problem #4: Conditional Count

#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d,e;
    cout<< "write your first number\n";
    cin>>x;
    cout<< "write the rest of the numbers\n";
    cin>>a>>b>>c>>d>>e;

    int y=0;

    y +=(a<=x);
    y +=(b<=x);
    y +=(c<=x);
    y +=(d<=x);
    y +=(e<=x);
    cout<< y << " "<< 5-y;
     return 0;
}

