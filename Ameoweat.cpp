#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Ameoweat{
	string name;
	float score;
	int people;
	Ameoweat* next;
};

void Addstore(Ameoweat *meow);
void Deletestore(Ameoweat *meow);
void Addscore(Ameoweat *meow);
void Showthelist(Ameoweat *meow);
void Showthelist(Ameoweat *meow);
void Search(Ameoweat *meow);
void Sort(Ameoweat *meow);
void swap(Ameoweat *a, Ameoweat *b) ;
int size=0;

int main()
{
	cout<<"Please input the mode 1) Add store 2) Delete store 3) Add score 4) Search  5) Show the list"<<endl;
	int mode;
	Ameoweat *meow=new Ameoweat;
	meow->next=NULL;
	
	while(cin >>mode){
		switch(mode)
		{
			case 1:		Addstore(meow);		break;
			case 2:		Deletestore(meow);	break;
			case 3:		Addscore(meow);		break;
			case 4:		Search(meow);		break;
			case 5:		Showthelist(meow);	break;
			default:	break;
		}
	}
	return 0;
}

void Addstore(Ameoweat *meow)
{
	Ameoweat *temp, *last;
	temp = meow;
	string name;
	float score;
	cout<<"Please input the name of store:";
	cin >>name;
	cout<<"Please input the score of "<<name<<":";;
	cin>>score;
	if(temp->next == NULL)	//代表沒有資料 
	{
		Ameoweat *in = new Ameoweat;
		in ->name = name;
		in ->people = 1;
		in ->score = score;
		in ->next = NULL;
		temp ->next = in;
		cout <<"Add Store \""<<name<<"\" Succeseful!!\n"<<endl;
		size++;
		return;
	}
	else
	{
		last = temp;
		temp = temp ->next;
		while(temp != NULL){
			if(temp->score < score)
			{
				Ameoweat *in = new Ameoweat;
				in ->name = name;
				in ->people = 1;
				in ->score = score;
				in ->next = temp;
				last ->next = in;
				cout <<"Add Store \""<<name<<"\" Succeseful!!\n"<<endl;
				size++;
				return;
			}
			else if(temp->next == NULL){
				Ameoweat *in = new Ameoweat;
				in ->name = name;
				in ->people = 1;
				in ->score = score;
				in ->next = NULL;
				temp ->next = in;
				cout <<"Add Store \""<<name<<"\" Succeseful!!\n"<<endl;
				size++;
				return;
			}		
		last = temp;
		temp = temp ->next;		
		}	
	}
}

void Deletestore(Ameoweat *meow){
	Ameoweat *temp, *last;
	last = meow;
	temp = meow->next;
	
	string name;
	cout<<"Please input the name of store:";
	cin>>name;
	if(last->name == name){
		if(size == 1){
			meow = NULL;
			size--;
			cout <<"Delete " <<name <<" Succeseful" <<endl;
			cout<<endl;
			return;
		}
		*meow= *meow->next; 
		cout <<"Delete " <<name <<" Succeseful" <<endl;
		size--;
		cout<<endl;
		return;
	}
	while(temp!=NULL){
		if(temp->name == name){
			last->next = temp ->next;
			delete temp;
			cout <<"Delete " <<name <<" Succeseful" <<endl;
			size--;
			cout<<endl;
			return;
		}
		last = temp;
		temp = temp->next;
	}
	cout<<"Not Found "<<name<<endl;
	cout<<endl;
}


void Addscore(Ameoweat *meow)
{
	Ameoweat *temp,*last;
	last = meow;
	temp = meow->next;
	string name;
	float score;
	cout<<"Please input the name of store:";
	cin >>name;
	cout<<"Please input the score of "<<name<<":";;
	cin>>score;
	if(last->name == name){
		float sum = (last->people)*(last->score);
		last->people=last->people+1;
		sum=(sum+score)/(last->people);
		last->score=sum;
		cout <<"Add Score Succeseful!!\n"<<endl;
		return;
	}
	while(temp != NULL){
		if(temp->name == name){
			float sum = (temp->people)*(temp->score);
			temp->people=temp->people+1;
			sum=(sum+score)/(temp->people);
			temp->score=sum;
			cout <<"Add Score Succeseful!!\n"<<endl;
			return;
		}
		last = temp;
		temp = temp->next;
	}
	cout <<"Not Found "<<name <<"\n";	
}

void Search(Ameoweat *meow)
{
	Ameoweat *temp,*last;
	last = meow;
	temp = meow->next;
	string name;
	cout<<"Please input the name of store:";
	cin >>name ;
	if(last->name == name){
		cout<<setw(20)<<"Name"<<setw(20)<<"|Score"<<setw(20)<<"|number of people"<<endl;
		cout <<setw(20)<<last->name <<setw(20)<< last->score<<setw(20)<<last->people<<endl;
		cout<<endl;
		return;
	}
	while(temp != NULL){
		if(temp->name == name){
			cout<<setw(20)<<"Name"<<setw(20)<<"|Score"<<setw(20)<<"|number of people"<<endl;
			cout <<setw(20)<<temp->name <<setw(20)<< temp->score<<setw(20)<<temp->people<<endl;
			cout<<endl;
			return;
		}
		last = temp;
		temp = temp->next;
	}
	cout <<"Not Found "<<name <<endl;	
	cout<<endl;
}

void Showthelist(Ameoweat *meow){
	
	Sort(meow);
	Ameoweat *now=meow;
	cout<<setw(20)<<"Name"<<setw(20)<<"|Score"<<setw(20)<<"|number of people"<<endl;
	for(int k=0;k<size;k++){
		cout<<setw(20)<<now->name<<setw(20)<<now->score<<setw(20)<<now->people<<endl;
		now=now->next;
	}
	cout<<endl;
}

void Sort(Ameoweat *start) 
{ 
    int swapped, i; 
    Ameoweat *ptr1; 
    Ameoweat *lptr = NULL; 
  
    if (start->next == NULL) 
        return; 
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->score < ptr1->next->score) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
}

void swap(Ameoweat *a, Ameoweat *b) 
{ 
    int temp = a->score; 
    a->score = b->score; 
    b->score = temp;
	int temp2 = a->people; 
    a->people = b->people; 
    b->people = temp2; 
    string temp3 = a->name; 
    a->name = b->name; 
    b->name = temp3;
} 


