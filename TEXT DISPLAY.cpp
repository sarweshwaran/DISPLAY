#include<iostream>
using namespace std;


class text
{
	char name[20];
	
	char x;
	
	public:
		
		void get()
		{
			
			cout<<"\nENETER YOUR TEXT :";			//getting the word
			gets(name);
			
		}
		
		//displaying the word 
		
		void put()
		{
			
			for(int i=0;i<=20;i++)				//to print the letters one by one 
			{
				
				if(name[i]!='\0')				//confirming that empty space is not be printed
				{
					
				x=name[i];
				
				switch(x)
				{
					case 'a':
						
						cout<<"\n AAAA \nA    A\nAAAAAA\nA    A\nA    A\nA    A"<<endl;
						break;
						
					case 'b':
						
						cout<<"\nBBBBB\nB    B\nB     B\nB    B\nBBBB\nB    B\nB     B\nB    B\nBBBB"<<endl;
						break;
						
					case 'c':
						
						cout<<"\n    C C\n  C\n C\nC\n C\n  C\n    C C"<<endl;
						break;
						
					case 'd':
						
						cout<<"\nD D D\nD    D\nD     D\nD    D\nD D D"<<endl;
						break;
						
					case 'e':
						
						cout<<"\nEEEEEE\nE\nEEEE\nE\nEEEEEE"<<endl;
						break;
						
					case 'f':
						
						cout<<"\nFFFFFF\nF\nFFFFFF\nF\nF\nF"<<endl;
						break;
						
					case 'g':
						
						cout<<"\n  GGGGG\n G\nG   GGG\n G    G\n  GGGG"<<endl;
						break;
						
					case 'h':
						
						cout<<"\nH    H\nH    H\nHHHHHH\nH    H\nH    H"<<endl;
						break;
						
					case 'i':
						
						cout<<"\nIIIIIII\n   I\n   I\n   I\nIIIIIII";
						break;
						
					case 'j':
						
						cout<<"\nJJJJJJ\n   J\n   J\nJ  J\n JJ "<<endl;
						break;
						
					case 'k':
						
						cout<<"\nK    K\nK   K\nK K\nK   K\nK    K"<<endl;
						break;
						
					case 'l':
						
						cout<<"\nL\nL\nL\nL\nLLLLLL"<<endl;
						break;
						
					case 'm':
						
						cout<<"\nMMM    MMM\nM M   M  M\nM  M M   M\nM   M    M"<<endl;
						break;
						
					case 'n':
						
						cout<<"\nNN   N\nN N  N\nN  N N\nN   NN"<<endl;
						break;
						
					case 'o':
						
						cout<<"\n   OOO\n O     O\nO       O\n O     O\n   OOO"<<endl;
						break;
						
					case 'p':
						
						cout<<"\nPPPPP\nP    P\nP     P\nP    P\nPPPPP\nP\nP\nP"<<endl;
						break;
						
					case 'q':
						
						cout<<"\n   QQQ\n Q     Q\nQ       Q\n Q     Q\n   QQQQ\n        QQ"<<endl;
						break;
						
					case 'r':
						
						cout<<"\nRRRRR\nR    R\nR     R\nR    R\nRRRRR\nR   R\nR    R\nR     R"<<endl;
						break;
						
					case 's':
						
						cout<<"\n  SSSS\n S\nS\n S\n  SSS\n     S\n      S\n     S\n SSSS"<<endl;
						break;
						
					case 't':
						
						cout<<"\nTTTTTTT\n   T\n   T\n   T"<<endl;
						break;
						
					case 'u':
						
						cout<<"\nU       U\nU       U\nU       U\n U     U\n   UUU"<<endl;
						break;
						
					case 'v':
						
						cout<<"\nV       V\n V     V\n  V   V\n   V V\n    V"<<endl;
						break;
						
					case 'w':
						
						cout<<"\nW   W   W\nW  WW   W\n W W W W\n  W   W"<<endl;
						break;
						
					case 'x':
						
						cout<<"\nX     X\n X   X\n  X X\n   X\n  X X\n X   X\nX     X"<<endl;
						break;
						
					case 'y':
						
						cout<<"\nY     Y\n Y   Y\n  Y Y\n   Y\n   Y\n   Y"<<endl;
						break;
						
					case 'z':
						
						cout<<"\nZZZZZZ\n    Z\n   Z\n  Z\n Z\nZZZZZZ"<<endl;
						break;
						
					default:
						
						cout<<"\n\n\t-->"<<name[i]<<"<--\tUNKNOWN CHARACTER(PLEASE ENETER a-z ONLY)\n"<<endl;break;				
				}
				}
			else
			{
				break;
			}
			}
		}
};



//main function


int main()
{
	
	text a1;
	
	a1.get();
	
	a1.put();
	
}

