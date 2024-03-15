#include<iostream>
using namespace std;

void update(int **p2)
{
//p2=p2+1;
//kuch change hoga isse -> no


//*p2=*p2+1;
//kuch change hoga isse -> Yes

**p2 = **p2 +1;
//kuch change hoga isse -> Yes


}
int main(){


int i=5;
int *p=&i;
int **p2 = &p;

cout<< endl;
cout<< "before"<< i <<endl;
cout<< "before"<< p <<endl;
cout<< "before"<< p2 <<endl;

update(p2);

cout<<"after"<< i <<endl;
cout<<"after"<< p <<endl;
cout<<"after"<< p2 <<endl;


return 0;
}
