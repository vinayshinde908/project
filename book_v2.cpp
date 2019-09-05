#include<iostream>
#include<cstring>
using namespace std;



class BookStore
{
	private:
		
		class Book
		{
			private:
				char *BookTitle;
				const int BookCost;
				int BookStock;
			
			public:
				Book(char *s="-", int bc = 0, int bs = 0):BookTitle(new char[strlen(s)+1]),BookCost(bc),  BookStock(bs)
				{
					strcpy(BookTitle,s);
				}
				
				char * getName()
				{
					return BookTitle;
				}
				
				int getCost()
				{
					return BookCost;
				}
				
				int getStock()
				{
					return BookStock;
				}
				
				void setStock(int b)
				{
					BookStock -= b;
				}
				
				~Book()
				{
					if(!BookTitle)
					{
						delete [] BookTitle;
					}
				}
		};
		Book *b[4];
		static int count;
		
		
		
		
	
	public:
		BookStore()
		{
			for(int i=0;i<4;i++)
			{
				b[i] = NULL;
			}
		}
		
		void addBook()
		{
			if(count < 4)
			{
				char name[25];
				int bookCost;
				int bookStock;
				int flag = 0;
				
				cout<<"Enter Book Name, Cost and Stock: ";
				cin>>name>>bookCost>>bookStock;
				
				for(int i=0;i<4;i++)
				{
					if(b[i])
					{
						if(strcmp(name,b[i]->getName()) == 0)
						{
							cout<<"Book already exists."<<endl;
							b[i]->setStock(-bookStock);
							flag = 1;
							break;
						}
					}
				}
				
				if(flag == 0)
				{
					for(int i=0;i<4;i++)
					{
						if(b[i] == NULL)
						{
							b[i] = new Book(name,bookCost,bookStock);
							count++;
							break;
						}
					}
				}
			}
			
			else
			{
				cout<<"This store is full, try another."<<endl;
			}
		}
		
		void DisplayBookDetails()
		{
			if(count == 0)
			{
				cout<<"No books."<<endl;
			}
			
			for(int i=0;i<4;i++)
			{
				if(b[i])
				{
					cout<<"----------"<<endl;
					cout<<"Title: "<<b[i]->getName()<<endl;
					cout<<"Price: "<<b[i]->getCost()<<endl;
					cout<<"Stock: "<<b[i]->getStock()<<endl;
					cout<<"----------"<<endl;
				}
			}
		}
		
		void searchBook()
		{
			char name[25];
			int qty, i=0;
			
			cout<<"Enter name and quantity: "<<endl;
			cin>>name>>qty;
			
			for(i=0;i<4;i++)
			{
				if(b[i])
				{
					if(strcmp(name,b[i]->getName()) == 0)
					{
						
						cout<<"Book found. Checking stock...."<<endl;
						
						if(qty <= b[i]->getStock())
						{
							cout<<"Ample stock present."<<endl;
							cout<<"Your bill amount is Rs. "<<(qty*b[i]->getCost())<<endl<<"Enter y to purchase: ";
							cin>>name[24];
							
							if(name[24] == 'y')
							{
								b[i]->setStock(qty);
								cout<<"Purchased."<<endl;
								
								if(b[i]->getStock() == 0)
								{
									delete b[i];
									b[i] = NULL;
									count--;
								}
							}
						}
						
						else
						{
							cout<<"Stock is low. Please go somewhere else and try."<<endl;
						}
						
						break;
					}
				}
			}
			
			if(i >= 4)
			{
				cout<<"No such book is here. Sorry we could not help you."<<endl;
			}
		}
		
		~BookStore()
		{
			for(int i=0;i<4;i++)
			{
				if(b[i])
				{
					delete b[i];
					b[i] = NULL;
				}
			}
		}
	
};

int BookStore::count=0;



int main()
{
	int i;
	BookStore bkst;
	
	do
	{
		cout<<"1. Add a book"<<endl;
		cout<<"2. Display details"<<endl;
		cout<<"3. Search for a book"<<endl;
		cout<<">=4. Exit"<<endl;
		cout<<"Enter choice: ";
		cin>>i;
		
		switch(i)
		{
			case 1:
				bkst.addBook();
				break;
			case 2:
				bkst.DisplayBookDetails();
				break;
			case 3:
				bkst.searchBook();
				break;
			default:break;
		}
		
		cout<<"-x-x-x-x-"<<endl<<endl<<endl;
		
	}while(i<4);
	
	return 0;
}

