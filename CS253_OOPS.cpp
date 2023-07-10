#include <bits/stdc++.h>

using namespace std;
//this is the class for ticket
class Ticket{
    string identification_number;
    int date1 = 12;
   
    int validity = 10;
    public:

    string name;
    int date2 ;
    string source_planet;
    string destination_planet;
    



    
    int price_of_Ticket;

    int price(){
      int D  = date2-date1 ;
      return D*5000;

    }

    void BOOK_Ticket(int d ,string s,string t,string n,string ID_N ){
                date2 = d;   
                source_planet =  s;
                destination_planet = t;
                name = n;
                identification_number = ID_N;
    }


    void Delete(){
      
    }
    void update(int d, string s,string t,string name,string ID_N){
        name  = name ;
        source_planet =  s;
        destination_planet = t;
        identification_number = ID_N;
        date2 = d;
    
    }

    void get_journry(){
        cout<<"Your journey from "<< date1 <<" to "<<date2<<endl;
        cout<<"*************************************************"<<endl;
        cout<<source_planet<<" to " <<  destination_planet<< endl;
    }
    void  get_Name(){
        cout<<"Name:" <<name<<endl; 
        
    }
    void  getId(){
        cout<<"YOUR Identification Number:"<<identification_number<<endl; 
    }
    void viewTicket(){
        
      get_Name();
      getId();
      get_journry();
      cout <<"You have to pay:"<< price()<<" rupees" <<endl;
      cout<<"Ticket is valide for only "<<validity<<" years"<<endl;
      cout<<"THANK YOU"<<endl;
    }


   
};




/// this is the class for planet
class Planet {

    string name;
    int x,y,z;
     
    public:
    Planet(string name, int x, int y, int z){
      this-> name = name;
      this-> x = x;
       this->y = y;
      this-> z = z;
    }


    void  getcoordinate(){
        cout<<this->x<<","<< this->y <<","<< this->z <<endl;
    }
    
    void update(int name,int x, int y, int z){
        this->name  = name ;
       this-> x = x;
       this-> y = y;
        this-> z = z;
    
    }
    void view(){
          cout<<"planet_name:"<<this->name<<endl;
          cout<<"coordinates"<<this->x<<","<< this->y <<","<< this->z <<endl;
          
    }
    
    
};


//this is the class for traveller
class Traveller{
      

      public: 
      string Name;
      string Id;
      string TravellerId;

     
    //   string get___Id(){
    //     return this->Id;
    //   }
     string  getName(){
       return this->Name;
      }
       string getID(){
        return this->TravellerId;
      }
      void verify_ID(){
        if(this->Id == this->TravellerId){
            cout<<"verified"<<endl;

        }
        else{
            cout<<"wrongID"<<endl;

        }
      }

      void getTicket(){


      }
       void updateID(string ID){
       this->TravellerId = ID;
       }


};


class Astronaut: public Traveller {
    int experirence;  
    public:
    Astronaut(int e,string TravellerId, string Name ){
      this-> experirence = e ;
       this-> TravellerId = TravellerId;
       this->  Name = Name;

    }  
    void update(int e,string TravellerId, string Name ){
         this-> experirence = e ;
       this-> TravellerId = TravellerId;
       this->  Name = Name;
    }
    void  view(){
        cout<<"Name:" << this->  Name<< endl;
        cout<<"exp." << this-> experirence<<endl;
        cout<<"TravellerID : "<<this-> TravellerId <<endl;
    }
    
};


class Passenger: public Traveller, public Ticket {
    
      
    public:
    int validity; 
    Passenger(int v,string TravellerId, string Name){
        this->validity = v;
       this-> TravellerId = TravellerId;
       this-> Name = Name;
     
    }
    void update(int v,string TravellerId, string Name){
    
         this->validity = v;
       this-> TravellerId = TravellerId;
       this-> Name = Name;
     
    }
      void  view(){
        cout<<"Name:" << this->  Name<< endl;
        cout<<"validity:" << this-> validity<<endl;
        cout<<"TravellerID : "<<this-> TravellerId <<endl;
    }
 

}; 
class Commander: public Traveller {
 string Authority ;
 
 public:
 int Experience;
 string LicenseID;
//  vector<string> LCommander;
//   LCommander.push_back("C1");
//   LCommander.push_back("C2");
  Commander(string A, int e, string l,string TravellerId, string Name ){
    this->Authority = A;
   this-> Experience = e;
    this-> LicenseID = l;
    this-> TravellerId = TravellerId;  
    this-> Name = Name;    

  }
  void update(string A, int e, string l,string TravellerId, string Name ){
    this->Authority = A;
   this-> Experience = e;
    this-> LicenseID = l;
    this-> TravellerId = TravellerId;  
    this-> Name = Name;    
  
  }
    void  view(){
        cout<<"Name:" << this->  Name<< endl;
        cout<<"exp." << this-> Experience<<endl;
        cout<<"TravellerID : "<<this-> TravellerId <<endl;
        cout<<"Licenecc ID:"<<this-> LicenseID<< endl;
        cout<<"Authority: "<<this->Authority<<endl;
    }
  

}; 

// this is the class for space travel.
class SpaceTravel {
    private:
    vector<string> travellers;
    string  AstronautID;
    string CommanderID;
      

// private:
//     vector<string> travellers;
//     string astronaut;
//     string commander;

public:
    // Add a traveller to the list
    void addTraveller(string name) {
        if (travellers.size() < 10) {
            travellers.push_back(name);
        } else {
            cout << "Not Allowed" << endl;
        }
    }

    // List all travellers
    void  Listalltravellers() {
        cout << "List of travellers in your journey are:" << endl;
        for (string name : travellers) {
            cout << name << endl;
        }
    }

    // Set the Astronaut ID
    void set_Astronaut_ID(string id) {
      this->  AstronautID = id;
    }

    // Set the Commander ID
    void set_Commander_ID(string id) {
       this-> CommanderID = id;
    }

    // Update the astronaut ID, while changing the astronaut
    void update_Astronaut_ID(string id) {
        if (id != AstronautID) {
            this->AstronautID = id;
        } 
    }
 
    // Change the commander ID, while changing the commander
    void update_Commander_ID(string id) {
        if (id != CommanderID) {
           this-> CommanderID = id;
        } 
    }
    void view(){
        cout<<"AstronautID:"<<AstronautID<<endl;
        cout<<"CommanderID:"<<CommanderID<<endl;
    }
};


//this is my main code in which i made a space with 3 planet and 15 traveller. and after it i made 4 space travel system ST1 , St2,St3,St4 on different dates and diff. source and destination . and after it i made a option to use command line input for a new passenger. that's it.
int main() {
    // Example usage
    SpaceTravel T;
    Planet P1("Earth",0,0,1);
    Planet P2("IITK",0,0,2);
    Planet P3("Hall6",0,0,3);
   

    Passenger p1(60,"001","P1"); /// Passenger(int v,string TravellerId, string Name)
    Passenger p2(60,"002","P2");
    Passenger p3(60,"003","P3");
    Passenger p4(60,"004","P4");
    Passenger p5(60,"005","P5");
    Passenger p6(60,"006","P6");
    Passenger p7(60,"007","P7");
    Passenger p8(60,"008","P8");
    Passenger p9(60,"009","P9");
    Passenger p10(60,"010","P10");
    Passenger p11(60,"011","P11");
    
    Commander c1("Commander",8,"0001","000_1","C1") ; ///Authority = A; Experience = e;LicenseID = l;TravellerId = TravellerId;   Name = Name; 
    
    Commander c2("Commander",8,"0002","000_2","C2") ;
    
    Astronaut a1(8,"00001","A1");

    Astronaut a2(8,"00002","A2");

     SpaceTravel ST1;
      SpaceTravel ST2;
       SpaceTravel ST3;
        SpaceTravel ST4;
   
     list < Passenger >common ;
     list < Passenger >L1 ;//date = 16
     list < Passenger >L2 ;//date = 17
     list < Passenger >L3 ;//date = 18
     list < Passenger >L4 ;//date = 19

    p1.BOOK_Ticket(16,"IITK","Hall6",p1.Name,p1.TravellerId );  //book the ticket
    common.push_back(p1);

    p2.BOOK_Ticket(17,"Earth","Hall6",p2.Name,p2.TravellerId );  //book the ticket
    common.push_back(p2);
    p3.BOOK_Ticket(17,"Earth","Hall6",p3.Name,p3.TravellerId );  //book the ticket
    common.push_back(p3);

    p4.BOOK_Ticket(17,"Earth","Hall6",p4.Name,p4.TravellerId );  //book the ticket
    common.push_back(p4);

    p5.BOOK_Ticket(17,"Earth","Hall6",p5.Name,p5.TravellerId );  //book the ticket
    common.push_back(p5);
    p6.BOOK_Ticket(18,"IITK","Earth",p6.Name,p6.TravellerId );  //book the ticket
    common.push_back(p6);
    p7.BOOK_Ticket(18,"IITK","Earth",p7.Name,p7.TravellerId );  //book the ticket
    common.push_back(p7);

    p8.BOOK_Ticket(19,"IITK","Hall6",p8.Name,p8.TravellerId );  //book the ticket
    common.push_back(p8);

    p9.BOOK_Ticket(19,"IITK","Hall6",p9.Name,p9.TravellerId );  //book the ticket
    common.push_back(p9);
    p10.BOOK_Ticket(19,"IITK","Hall6",p10.Name,p10.TravellerId );  //book the ticket
    common.push_back(p10);

    list < Passenger >::iterator it;
    int i1 =0;
    int i2 =0;
    int i3 =0;
    int i4 =0;
    

    
    for(it = common.begin(); it!=common.end(); it++  ){
      if(((*it).date2 == 16 )&&((*it).source_planet == "IITK")&&((*it).destination_planet=="Hall6" ) ){
        L1.push_back((*it));
      }
      else if(((*it).date2 == 17 )&&((*it).source_planet == "Earth")&&((*it).destination_planet=="Hall6" ) ){
        L2.push_back((*it));
      }

        else if(((*it).date2 == 18 )&&((*it).source_planet == "IITK")&&((*it).destination_planet=="Earth" ) ){
        L3.push_back((*it));
      }
      else if(((*it).date2 == 19 )&&((*it).source_planet == "IITK")&&((*it).destination_planet=="Hall6" ) ){
        L4.push_back((*it));
      }
    }

     cout<<"You want to book a Ticket ? , press 1 for yes or 0 for no :"<<endl;
     int x;
     cin>>x;
     int y;
    int j;
    int J;

     if(x){
        
        cout<<"how many tickets you want to book :"<<endl;
        cin>>j;
        J = 0;

        while(j--){
            if(J!=0){
                cout<<""<<endl;
                cout<<"Book Your next Ticket :"<<endl;
                
            }
            J++;
        
         Passenger Sir(60,"000023","name");
            cout<<"write your name:"<<endl;
        
            string N,D;
            cin>>N;
            Sir.Name = N;
            cout<<"write your ID:"<<endl;
            cin>>D;
            Sir.TravellerId = D;
            cout<<"welcome your travel id is: "<<Sir.TravellerId<<endl;

         cout<<"Ok, so we have 4 space travel system :"<<endl;
         cout<<"Choose one of these :"<<endl;
        if(L1.size()>1){
          cout<<" on date 16 we will gone for tarvel from IITK to hall6 planet: , press 1 if you want to go for this:"<<endl;
        }
        if(L2.size()>1){
          cout<<" on date 17 we will gone for tarvel from Earth to hall6 planet: , press 2 if you want to go for this:"<<endl;
        }
        if(L3.size()>1){
          cout<<" on date 18 we will gone for tarvel from IITK to Earth planet: , press 3 if you want to go for this:"<<endl;
        }
        if(L3.size()>1){
           cout<<" on date 19 we will gone for tarvel from IITK to hall6 planet: , press 4 if you want to go for this:"<<endl;
        }
        

       
       
        
       
        
        cin>>y;

        if(y){
           

            
        
        

            if(y==1){
                Sir.BOOK_Ticket(16,"IITK","Hall6",Sir.Name,Sir.TravellerId);
                cout<<" So this is your Ticket: " <<endl;
                 Sir.viewTicket();

                 cout<<"you want to be delete this ticket ? ,press 1 for delete or 0 for nothing."<<endl;
                 int c;
                 cin>>c;

                 if(c==0){
                   L1.push_back(Sir);
                 }
                 else{
                    continue;
                 }
                


            }
            if(y==2){
                 Sir.BOOK_Ticket(17,"Earth","Hall6",Sir.Name,Sir.TravellerId );
              cout<<" So this is your Ticket: " <<endl;
                 Sir.viewTicket();

                 cout<<"you want to be delete this ticket ? ,press 1 for delete or 0 for nothing."<<endl;
                 int c;
                 cin>>c;

                 if(c==0){
                   L2.push_back(Sir);
                 }
                 else{
                    continue;
                 }
            }
             if(y==3){
                Sir.BOOK_Ticket(18,"IITK","Earth",Sir.Name,Sir.TravellerId );
              cout<<" So this is your Ticket: " <<endl;
                 Sir.viewTicket();

                 cout<<"you want to be delete this ticket ? ,press 1 for delete or 0 for nothing."<<endl;
                 int c;
                 cin>>c;

                 if(c==0){
                   L3.push_back(Sir);
                 }
                 else{
                    continue;
                 } 
            }

             if(y==4){
                Sir.BOOK_Ticket(19,"IITK","Hall6",Sir.Name,Sir.TravellerId );
               cout<<" So this is your Ticket: " <<endl;
                 Sir.viewTicket();

                 cout<<"you want to be delete this ticket ? ,press 1 for delete or 0 for nothing."<<endl;
                 int c;
                 cin>>c;

                 if(c==0){
                   L4.push_back(Sir);
                 }
                 else{
                    continue;
                 }
            }
            
        }
        else{
            cout<<"please enter a valid travel_number:"<<endl;
            cin>>y;
           



    

          
            if(y==1){
                Sir.BOOK_Ticket(16,"IITK","Hall6",Sir.Name,Sir.TravellerId);
                cout<<" So this is your Ticket: " <<endl;
                 Sir.viewTicket();

                 cout<<"you want to be delete this ticket ? ,press 1 for delete or 0 for nothing."<<endl;
                 int c;
                 cin>>c;

                 if(c==0){
                   L1.push_back(Sir);
                 }
                 else{
                    continue;
                 }
                


            }
            if(y==2){
                 Sir.BOOK_Ticket(17,"Earth","Hall6",Sir.Name,Sir.TravellerId );
              cout<<" So this is your Ticket: " <<endl;
                 Sir.viewTicket();

                 cout<<"you want to be delete this ticket ? ,press 1 for delete or 0 for nothing."<<endl;
                 int c;
                 cin>>c;

                 if(c==0){
                   L2.push_back(Sir);
                 }
                 else{
                    continue;
                 }
            }
             if(y==3){
                Sir.BOOK_Ticket(18,"IITK","Earth",Sir.Name,Sir.TravellerId );
              cout<<" So this is your Ticket: " <<endl;
                 Sir.viewTicket();

                 cout<<"you want to be delete this ticket ? ,press 1 for delete or 0 for nothing."<<endl;
                 int c;
                 cin>>c;

                 if(c==0){
                   L3.push_back(Sir);
                 }
                 else{
                    continue;
                 } 
            }

             if(y==4){
                Sir.BOOK_Ticket(19,"IITK","Hall6",Sir.Name,Sir.TravellerId );
               cout<<" So this is your Ticket: " <<endl;
                 Sir.viewTicket();

                 cout<<"you want to be delete this ticket ? ,press 1 for delete or 0 for nothing."<<endl;
                 int c;
                 cin>>c;

                 if(c==0){
                   L4.push_back(Sir);
                 }
                 else{
                    continue;
                 }
            }

        }

     
      
        if(L1.size()>2){
            if(i1<1){

          
           
            ST1.set_Astronaut_ID(a1.getID());
            ST1.set_Commander_ID(c1.getID());
            
            for(it = L1.begin(); it!=L1.end(); it++  ){
            ST1.addTraveller((*it).Name);
        }
        ST1.addTraveller(a1.Name);
        ST1.addTraveller(c1.Name);
        i1++;

          }
        if(y==1){
          ST1.Listalltravellers();
        }
       
       

       }
        else{
            if(y==1){
            cout<<"Sorry!! None of the Space_travel_Service is ready for space tarvel 1."<<endl;
            }
        
       }
        


        if(L2.size()>2){
            if(i2<1){

            
            // SpaceTravel ST2;
            ST2.set_Commander_ID(c1.getID());
             ST2.set_Astronaut_ID(a1.getID());
            for(it = L2.begin(); it!=L2.end(); it++  ){
            ST2.addTraveller((*it).Name);
        }
        ST2.addTraveller(c1.Name);
        ST2.addTraveller(a1.Name);
            i2++;
            }
        if(y==2){
         ST2.Listalltravellers();
        }
        
       

       }
         else{
            if(y==2){
            cout<<"Sorry!! None of the Space_travel_Service is ready for space tarvel 2."<<endl;
            }
        
        
         } 
      
 

        if(L3.size()>2){
            if(i3<1){

           
            // SpaceTravel ST3;
            ST3.set_Commander_ID(c2.getID());
            ST3.set_Astronaut_ID(a2.getID());
            for(it = L3.begin(); it!=L3.end(); it++  ){
            ST3.addTraveller((*it).Name);
        }

        ST3.addTraveller(c2.Name);
        ST3.addTraveller(a2.Name);
        i3++;

         }
        if(y==3){
         ST3.Listalltravellers();
        }
       // 
        
        }
         else{
            if(y==3){
            cout<<"Sorry!! None of the Space_travel_Service is ready for space tarvel 3."<<endl;
            }
        
       }
       
    

        if(L4.size()>2){
            if(i4<1){

           
            // SpaceTravel ST4;
            ST4.set_Commander_ID(c2.getID());
            ST4.set_Astronaut_ID(a2.getID());
        
            for(it = L4.begin(); it!=L4.end(); it++  ){
            ST4.addTraveller((*it).Name);
            }
            ST4.addTraveller(c2.Name);
        
            ST4.addTraveller(a2.Name);
            i4++;
             }
            if(y==4){
              ST4.Listalltravellers();
            }
            
       }
        else{
            if(y==4){
            cout<<"Sorry!! None of the Space_travel_Service is ready for space tarvel 5."<<endl;
            }
        
       }
       cout<<" "<<endl;
       cout<<" So this is your Ticket: " <<endl;
       Sir.viewTicket();

      }
    }
   
      

    return 0;
}
