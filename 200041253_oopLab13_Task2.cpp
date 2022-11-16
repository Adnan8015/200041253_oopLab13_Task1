
#include <bits/stdc++.h>
using namespace std;
namespace my_namespace
{
    string a = "Ahmad";

}
//namespace my_namespace_2
//{
//    string a = "Ahmad";
//
//}
int main()
{
    //using namespace my_namespace_2;
    string a = "Adnan";
    cout << "from main : " << a << endl;
    cout << "from my_namespace_1 : " << my_namespace :: a << endl;
    //cout<<a<<endl;
    //cout << "from my_namespace_2 : " << my_namespace_2 :: a << endl;
}
