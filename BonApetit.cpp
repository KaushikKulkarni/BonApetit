/**
 *Starting the project BonApetit now .
 *Worked on it but all in vain got wasted due to wrong concept application till now .
 *Now I have a strong concept background about how to proceed with the question .
 *And this time I am sure I will complete the problem .
 **/
#include<iostream>/**For input and output .*/

using namespace std ;

class Time
{
	public:
		int time ;
		int seat ;	
		Time(int , int) ;/**Making a constructor for this class to allow easy initialization .*/
	void Set(int , int) ;
} ;

Time :: Time(int t = 10000 ,int s = 0)
{
	time = t; 
	seat = s;
}

void Time :: Set(int t = 10000 ,int s = 0)
{
	time = t; 
	seat = s;
}

class Customer
{	
	private :
		int EnterTime ;/**One of the characterisstic of the customer to storethetime when he will enter .*/
		int EndTime ; /** It will store the time the customer will leave if he is going to enter the retro .*/
		int PreferSeat ; /** The preferrd seat of the customer will be stored here .*/
	public :
		Customer(int , int , int ) ;/** The constructor for the class .*/
		void Set(int ,int ,int) ;/**A function to set the data members of the class  Customer .*/
		int GetStart() ;/**This function is used to expose the variable EnterTime to the outside world .*/
		int GetFinish() ;/**This function is used to expose the varible EndTime to the outside world .*/
		int GetSeat() ;	
} ;

Customer :: Customer(int start = 0, int end = 0 ,int prefer = 0 )
{
	EnterTime = start ;
	EndTime = end ;
	PreferSeat = prefer ;
}

void Customer :: Set(int start = 0, int end = 0 ,int prefer = 0)
{
	EnterTime = start ;
	EndTime = end ;
	PreferSeat = prefer  ;
}

int Customer :: GetFinish() 
{
	return EndTime ;
}

int Customer :: GetSeat()
{
	return PreferSeat ;
} 

int Customer :: GetStart()
{
	return EnterTime ;
}

void merge(Customer *,int, int , int );

void StartSort(Customer *a, int low, int high)/** A function to sort the customer class on the basis of their starting time .*/
{

    int mid;

    if (low < high)

    {

        mid=(low+high)/2;

        StartSort(a,low,mid);

        StartSort(a,mid+1,high);

        merge(a,low,high,mid);

    }

    return;

}

void merge(Customer *a, int low, int high, int mid)

{

    int i, j, k;
Customer c[500];

    i = low;

    k = low;

    j = mid + 1;

    while (i <= mid && j <= high)

    {

        if (a[i].GetStart() < a[j].GetStart())

        {

            c[k] = a[i];

            k++;

            i++;

        }

        else

        {

            c[k] = a[j];

            k++;

            j++;

        }

    }

    while (i <= mid)

    {

        c[k] = a[i];

        k++;

        i++;

    }

    while (j <= high)

    {

        c[k] = a[j];

        k++;

        j++;

    }

    for (i = low; i < k; i++)

    {

        a[i] = c[i];

    }

}


int main()
{
	int n;/*A variable to store the number of customers that are going to arrive .*/
	int k;/* A variable to store the number of seats in the hotel .*/
	int i ;/** a variable used as control variable in loops .*/
	int StartPointer = 0;/** A variable to hold the point where I am currently holding the Start array .*/
	int EndPointer = 0;/** A variable to store where is my hold in the Finish array .*/
	int start ,end , prefer ;/**Variables to store the attributes of a single customer .*/
	cout << "First enter the number of the customers that are going to arrive :\n" ;
	cin >> n ; 
	cout << "Now enter the number of seats in the hotel.\n";
	cin >> k ;
	int CustomerCount = 0 ;
	int MaxCount =0;
	bool SeatAvailable[k] ;/** An array to store the current state of a particular seat if any value is initialized to true ,then 
	* it is clear that the seat is available .*/
	/**Now initializing the array to true to imply that initially all thee seats are available .*/
	for ( i=0 ;i < k ; i++)
	{
		SeatAvailable[i] = true ;
	}
	cout <<"Now enter the details of the customers :\n" ;
	Customer CurrCase[n] ;/** A variable to store the details of the customers of the current case .*/
	Time finish[n] ;/**A variable to store the finish time of the customer who are currently sitting .*/
	for ( i=0 ; i < n ; i++ )/**Now taking the details of the customer from the user .*/
	{
		cin >> start >> end >> prefer ;
		CurrCase[i].Set(start,end,prefer) ;
	}
	StartSort(CurrCase , 0 , n-1) ;	
	for (StartPointer = 0 ; StartPointer < n ; StartPointer++ )/**The working loop .*/
	{
		if ( CurrCase[StartPointer].GetStart() < finish[EndPointer].time )
		{
			if ( SeatAvailable[(CurrCase[StartPointer].GetSeat()) - 1])/**Checking the seat availability .*/
			{
				SeatAvailable[(CurrCase[StartPointer].GetSeat()) - 1] = false ;
				finish[EndPointer].Set(CurrCase[StartPointer].GetFinish() ,CurrCase[StartPointer].GetSeat() ) ;
				CustomerCount ++ ;
			}
		}
		else
		{
			SeatAvailable[(finish[EndPointer].seat) - 1] = true ;
			EndPointer ++ ;
			StartPointer -- ;
		}
	}
	cout << "The maximum number of customers entering the retaurant are : "<< CustomerCount <<endl ;	
}
