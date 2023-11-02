#include<iostream>
using namespace std;
int main(){
	int quant;
	int choice;
	int Qrooms=0,Qatekana=0, Qburger=0,Qwasa=0,Qchiken=0 , Qpasta=0;
	int Srooms=0,Satekana=0, Sburger=0,Swasa=0,Schiken=0 ,  Spasta=0;
	int Total_rooms=0,Total_atekana=0, Total_burger=0,Total_wasa=0,Total_chiken=0, Total_pasta=0;
	cout<<"\n\n\t QUANTITY OF ITEM WE HAVE\t  ";
	cout<<"\n\n\t  rooms avaliable in the HADIYA CULTURAL HOTEL = ";
	cin>>Qrooms;
	cout<<" \n\t Quantity of atekana = ";
	cin>>Qatekana;
	cout<<" \n\t Quantity of burger = ";
	cin>>Qburger;
	cout<<" \n\t  Quantity of wasa = ";
	cin>>Qwasa;
	 cout<<" \n\t  Quantity of chiken = ";
    cin>>Qchiken;
    cout<<" \n\t  Quantity of pasta = ";
    cin>>Qpasta;
   
    
    m:
    	cout<<" \n\t\t please select from the menu options \t ";
    	cout<<"\n\n1 ) Rooms ";
    	cout<<"\n\n2 ) Atekana ";
    	cout<<"\n\n3 ) Burger ";
		cout<<"\n\n4 ) Wasa ";
		cout<<"\n\n5 ) chiken";
    	cout<<"\n\n6) pasta";
    	cout<<"\n\n7) Information regarding sales and collection";
    	cout<<"\n\n8) exit";
    	cout<<"\n\n please enter your choice!";
    	cin>>choice;
    	switch( choice){
    		   
    		   case 1:
    		   	cout<<" \n\n please enter the number of rooms you want? =";
    		   	cin>>quant;
    		   	if( Qrooms-Srooms>=quant)
    		   	{
    		   		Srooms=Srooms+ quant;
    		   		Total_rooms=Total_rooms + quant*1200;
    		   		cout<<" \n\n\t\t  "<<quant<< "\t rooms have been alloted to you!";
				   }
				   
				   else
				   cout<<" \n\n\t \t only "<<quant<< " \t rooms remaining in the Hotel!";
				   break;
				   
				    case 2:
    		   	cout<<" \n\n enter atekana quantity = ";
    		   	cin>>quant;
    		   	if( Qatekana-Satekana>=quant)
    		   	{
    		   		Satekana=Satekana+ quant;
    		   		Total_atekana=Total_atekana + quant*1200;
    		   		cout<<" \n\n\t "<<quant<< " \t atekana is ordered!";
				   }
				   
				   else
				   cout<<" \n\n\t  only "<<Qatekana-Satekana<< " \t  atekana remaing in the hotel"; 
				   break;
				   
				   
				    case 3:
    		   	cout<<" \n\n enter burger quantity";
    		   	cin>>quant;
    		   	if( Qburger-Sburger>=quant)
    		   	{
    		   		Sburger=Sburger+ quant;
    		   		Total_burger=Total_burger + quant*1200;
    		   		cout<<" \n\n\t "<<quant<< " \t  burger is ordered!";
				   }
				   
				   else
				   cout<<" \n\n\t  only "<<Qburger-Sburger<< " \t  burger remaing in the hotel"; 
				   break;
				   
				   
				   
				     case 4:
    		   	cout<<" \n\n enter wasa quantity";
    		   	cin>>quant;
    		   	if( Qwasa-Swasa>=quant)
    		   	{
    		   		Swasa=Swasa+ quant;
    		   		Total_wasa=Total_wasa + quant*1200;
    		   		cout<<" \n\n\t "<<quant<< "\t  wasa is ordered!";
				   }
				   
				   else
				   cout<<" \n\n\t  only "<<Qwasa-Swasa<< "\t  wasa remaing in the hotel"; 
				   break;
    		   	
    		
    		  case 5:
    		   	cout<<" \n\n enter chiken quantity";
    		   	cin>>quant;
    		   	if( Qchiken-Schiken>=quant)
    		   	{
    		   		Schiken=Schiken+ quant;
    		   		Total_chiken=Total_chiken + quant*1200;
    		   		cout<<" \n\n\t "<<quant<< " chiken is ordered!";
				   }
				   
				   else
				   cout<<" \n\n\t  only "<<Qchiken-Schiken<< "\t  chiken remaing in the hotel"; 
				   break;
    		   	
    			  case 6:
    		   	cout<<" \n\n enter pasta quantity";
    		   	cin>>quant;
    		   	if( Qpasta-Spasta>=quant)
    		   	{
    		   		Spasta=Spasta+ quant;
    		   		Total_pasta=Total_pasta + quant*1200;
    		   		cout<<" \n\n\t "<<quant<< " pasta is ordered!";
				   }
				   
				   else
				   cout<<" \n\n\t  only "<<Qpasta-Spasta<< "pasta remaing in the hotel"; 
				   break;
    		
    		case 7:
    			cout<<" \n\t DATAILS OF HADIYA CULTURAL HOTEL SALES AND COLLECTION";
    		   	cout<<" \n\t a number of rooms we had = "<<Qrooms;
    		   	cout<<" \n\t a number of rooms we gave for rent = "<<Srooms;
    		   	cout<<" \n\t a number of rooms remaing = "<<Qrooms-Srooms;
    		   	cout<<" \n\t total number of rooms collection for the day = "<<Total_rooms;
    		
    		
    		   	cout<<" \n\t a number of atekana we had = "<<Qatekana;
    		   	cout<<" \n\t a number of atekana we sold =  "<<Satekana;
    		   	cout<<" \n\t a number of atekana remaing = "<<Qatekana-Satekana;
    		   	cout<<" \n\t total number of atekana collection for the day = "<<Total_atekana;
    		   	
    		   	
    		   	cout<<" \n\t a number of burger we had = "<<Qburger;
    		   	cout<<" \n\t a number of burger we sold = "<<Sburger;
    		   	cout<<" \n\t a number of burger remaing = "<<Qburger-Sburger;
    		   	cout<<" \n\t total number of burger collection for the day = "<<Total_burger;
    		   	
    		   	
    		   	
    		   	cout<<" \n\t a number wasa we had = "<<Qwasa;
    		   	cout<<" \n\t a number of wasa we sold = "<<Swasa;
    		   	cout<<" \n\t a number of wasa remaing = "<<Qwasa-Swasa;
    		   	cout<<" \n\t total number of wasa collection for the day = "<<Total_wasa;
    		   	
    		   	
    		   	
    		   	cout<<" \n\t a number chiken we had = "<<Qchiken;
    		   	cout<<" \n\t a number of chiken we sold  = "<<Schiken;
    		   	cout<<" \n\t a number of chiken remaing = "<<Qchiken-Schiken;
    		   	cout<<" \n\t total number of chiken collection for the day = "<<Total_chiken;
    		   	
    		   	
    		   	
    		   	cout<<" \n\t a number pasta we had = "<<Qpasta;
    		   	cout<<" \n\t a number of pasta we sold  = "<<Spasta;
    		   	cout<<" \n\t a number of pasta remaing = "<<Qpasta-Spasta;
    		   	cout<<" \n\t total number of pasta collection for the day = "<<Total_pasta;
    		   	
    		   	
    		   	case 8:
    		   		exit(0);
    		   	default:
				   cout<<" please selecte a number mention in the above";	
    		   	
    		
    		
		}
	
	
	
	goto m;
	
	
}
	
	
	
	
	
	
	
	
	
	
	

