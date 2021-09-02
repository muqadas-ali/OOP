#include<iostream>
using namespace std;
class abc
{
	private:
		int a,b,c,d;
		public:
			abc(int w,int x)
			{
				a=w;
				b=x;
			}
			
			abc(int w, int x,int y)
			{
				a=w;
				b=x;
				c=y;
			}
			
			abc(int w,int x,int y,int z)
			{
				a=w;
				b=x;
				c=y;
				d=z;
			}
			
			void sum(int ch)
			{
				if(ch==2)
				cout<<"SUM="<<a+b;
				
				else if(ch==3)
				cout<<"SUM="<<a+b+c;
				
				else if(ch==4)
				cout<<"SUM="<<a+b+c+d;
				}
};
			int main()
			{
				int c,p,q,r,s;
				cout<<"How many numbers you want to add\n";
				cin>>c;
				if(c==2)
				{
				cout<<"Enter two values \n";
				cin>>p>>q;
				abc obj(p,q);
				obj.sum(c);
				
			}
			else if(c==3)
			{
				cout<<"Enter three values \n";
				cin>>p>>q>>r;
				abc obj(p,q,r);
				obj.sum(c);
			}
			
			else if(c==4)
			{
				cout<<"Enter three values \n";
				cin>>p>>q>>r>>s;
				abc obj(p,q,r,s);
				obj.sum(c);
		}
	}

			
			
