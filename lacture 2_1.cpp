#include<iostream>
using namespace std;
class students{
	public:
	int stu_number;
	int stu_id;
	string stu_name;
	int stu_age;
	string stu_course;
	string stu_email;
	string stu_city;
	string stu_college;

	void setter(int number,int id,string name,int age,string course, string email,string city ,string college)
	{	
		stu_number=number;
		stu_id=id;
		stu_name=name;
		stu_age=age;
		stu_course=course;
		stu_email=email;
		stu_city=city;
		stu_college=college;	
	}
	void getter()
	{
		cout<<"+-+-+-+"<<stu_number<<"+-+-+-+"<<endl;
		cout<<"id:-"<<stu_id<<endl;
		cout<<"name:-"<<stu_name<<endl;
		cout<<"age:-"<<stu_age<<endl;
		cout<<"course:-"<<stu_course<<endl;
		cout<<"email:-"<<stu_email<<endl;
		cout<<"city:-"<<stu_city<<endl;
		cout<<"college:-"<<stu_college<<endl<<endl;
	}
};
main()
{
	students s;
	s.setter(1,201,"sujal",16,"andriod development","sujal@gmail.com","surat","bmu");
	s.getter();
	s.setter(2,202,"neel",12,"web development","neell@gmail.com","Delhi" ,"bmu");
	s.getter();
	s.setter(3,203,"kirtan",20,"andriod development","kirtan@gmail.com","surat","bmu");
	s.getter();	
	s.setter(4,204,"Darshil ",19,"ios development","Darshil@gmail.com","surat","bmu");
	s.getter();
	s.setter(5,205,"meet",16,"game development","meetl@gmail.com","Mumbai","bmu");
	s.getter();
}













