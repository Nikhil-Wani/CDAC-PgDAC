#include <iostream>

using namespace std;

void setRoute(char *path[], float *fare, float *tfare){
	int i=0;
	for(i=0;i<5;i++){
		cout<<"Enter flight route:"<<endl;
		cout<<"Route ["<<i+1<<"] : ";
		path[i]=new char[100];
	    cin.ignore(1);
		cin.getline(path[i],100);
		cout<<"Enter fare: ";
		cin>>fare[i];
		tfare[i]=fare[i]+(fare[i]*19/100);
	}
}

void displayPath(char *path[],float *fare, float *tfare){
	int i=0;
	cout<<"Available flight routes are:"<<endl;
	for(i=0;i<5;i++){
		cout<<"Route ["<<i+1<<"] : "<<path[i]
		<<" - Fare: "<<fare[i]<<",Total Fare: "<<tfare[i]<<endl;
	}	
}


int main(){
	
	char *route[5];
	float fare[5],totalFare[5];
	char name[30],path[100];
	int d,m,y;
	int routeId;
	
	setRoute(route,fare,totalFare);
	
	cout<<endl<<endl;
	cout<<"Enter name: ";
	cin.ignore(1);
	cin.getline(name,30);
	
	cout<<"Enter date of travel (d m y): ";
	cin>>d>>m>>y;
	
	displayPath(route,fare,totalFare);
	cout<<"Choose flight route (1 to 5): ";
	cin>>routeId;
	
	if(routeId<1 || routeId>5){
		cout<<"Invalid flight route!!!"<<endl;
		return 0;
	}
	
	cout<<endl<<endl;
	cout<<"Congratulations... "<<name<<" your ticket has been booked."<<endl;
	cout<<"Travel date is: "<<d<<"/"<<m<<"/"<<y<<endl;
	cout<<"Flight route: "<<route[routeId-1]<<endl;
	cout<<"Total fare is: "<<totalFare[routeId-1]<<endl;
	
	return 0;
}

Output:
Enter flight route:                                                                                                           
Route [1] : Hyderabad->Pune->Hyderabad                                                                                        
Enter fare: 12500                                                                                                             
Enter flight route:                                                                                                           
Route [2] : Chennai->Delhi->Kolkata->Hyderabad                                                                                
Enter fare: 24000                                                                                                             
Enter flight route:                                                                                                           
Route [3] : chennai->Mumbai                                                                                                   
Enter fare: 7600                                                                                                              
Enter flight route:                                                                                                           
Route [4] : Kolkata->dehli->Mumbai                                                                                            
Enter fare: 11000                                                                                                             
Enter flight route:                                                                                                           
Route [5] : Pune->Rajasthan                                                                                                   
Enter fare: 5500                                                                                                              
                                                                                                                              
                                                                                                                              
Enter name: x                                                                                                      
Enter date of travel (d m y): 20 02 2021                                                                                      
Available flight routes are:                                                                                                  
Route [1] : Hyderabad->Pune->Hyderabad - Fare: 12500,Total Fare: 14875                                                         
Route [2] : Chennai->Delhi->Kolkata->Hyderabad - Fare: 24000,Total Fare: 28560                                                
Route [3] : chennai->Mumbai - Fare: 7600,Total Fare: 9044                                                                     
Route [4] : Kolkata->dehli->Mumbai - Fare: 11000,Total Fare: 13090                                                            
Route [5] : Pune->Rajasthan - Fare: 5500,Total Fare: 6545                                                                     
Choose flight route (1 to 5):
