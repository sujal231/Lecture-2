#include<iostream>
using namespace std;
class cust{
	public:
	int cust_number;
	int cust_id;
	string cust_name;
	int cust_age;
	string cust_telecome_name;
	int cust_mobile_number;
	string cust_city;
	int cust_simcard_validity;
	
	void setter(int number,int id,string name,int age,string telecome_name,int mobile_number,string city,int simcard_validity)
	{
	cust_number=number;
	cust_id=id;
	cust_name=name;
	cust_age=age;
	cust_telecome_name=telecome_name;
	cust_mobile_number=mobile_number;
	cust_city=city;
	cust_simcard_validity=simcard_validity;	
	}
	void getter()
	{
	cout<<"_-_-_-_-_-_-"<<cust_number<<"-_-_-_-_-_-_"<<endl;
	cout<<"id:-"<<cust_id<<endl;
	cout<<"Name:-"<<cust_name<<endl;
	cout<<"Age:-"<<cust_age<<endl;
	cout<<"Telecome Name:-"<<cust_telecome_name<<endl;
	cout<<"Mobile number:-"<<cust_mobile_number<<endl;
	cout<<"City:-"<<cust_city<<endl;
	cout<<"Simcard Validity:-"<<cust_simcard_validity<<endl<<endl;
	}
};
main()
{
	
	cust s;
	s.setter(1,101,"sujal",16,"vi",8231326523,"surat",2);
	s.getter();
	s.setter(2,102,"neel",12,"jio",923136542,"Delhi",3);
	s.getter();
	s.setter(3,103,"kirtan",20,"Airtel,",823136542,"Bangalore",1);
	s.getter();
	s.setter(4,104,"Darshil",18,"jio",623133642,"Hyderabad",3);
	s.getter();
	s.setter(5,105,"meet",16,"vi",723134642,"Ahmedabad",2);
	s.getter();
	
	
	
	
	
	
	
	
	
}











