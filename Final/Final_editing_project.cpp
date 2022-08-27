#include<iostream.h>
#include<iomanip.h>
#include<windows.h>
#include<fstream.h>
#include<string.h>
using namespace std;

void BMICalculator();
int BMIWeightGain(int,float,float);
int BMIweightLose(int,float,float);
void NutritionMenu(float proteinmin,float proteinmax,float fats,float carbs,float totalCalary)
	{
		
		cout<<endl;
		cout<<setw(5)<<"Protien"<<endl;
		cout<<setw(5)<<"Minimum"<<setw(6)<<":"<<setw(6)<<proteinmin<<"cal/da"<<setw(13)<<proteinmin/4<<"g/day"<<endl;
		cout<<setw(5)<<"Maximum"<<setw(6)<<":"<<setw(6)<<proteinmax<<"cal/day"<<setw(13)<<proteinmax/4<<"g/day"<<endl;
		cout<<endl;
		
		cout<<setw(5)<<"Fats(HDL)"<<setw(4)<<":"<<setw(6)<<fats<<"cal/day"<<setw(12)<<fats/9<<"g/day"<<endl;
		cout<<setw(5)<<"Carbs"<<setw(8)<<":"<<setw(6)<<carbs<<"cal/day"<<setw(13)<<carbs/4.0178<<"g/day"<<endl;
		cout<<endl;
		cout<<setw(5)<<"TOTAL CALARY:"<<setw(4)<<" "<<totalCalary<<"cal/day"<<endl;
		
		
		
	}
	
void proteinList()
{
	
	
	cout<<endl;
	cout<<setw(10)<<"**Sorted by Protien Calories**"<<endl;
		
	string foods[31]={
	"Beef			:31g/100g",
	"Peanuts			:26g/100g",
	"Mung Beans			:24g/100g",
	"Tuna			:23g/100g",
	"Beans			:22g/100g",
	"Almond			:22g/100g",
	"Chicken Breast		:20g/100g",
	"Oats			:16g/100g",
	"Cashew Nuts		:15g/100g",
	"Hazel Nuts			:15g/100g",
	"Eggs			:13g/100g",
	"GreekYogurt		:10g/100g",
	"Salmon			:9g/100g",
	"Fresh Milk			:6.6g/100g",
	"Cheese			:6.2g/100g",
	"Kidney Beans		:4.8g/100g",
	"Parsley			:3g/100g",
	"Spinach			:2.9g/100g",
	"Brocalli			:2.8g/100g",
	"Rice			:2g/100g",
	//"Avacado			:2g/100g"
	"Freid Foods",
	"Refined Foods",
	"Sugar Rich Foods",
	"Carbonated Drinks",
	"White Bread",
	"Pastries and cakes",
	"Alcohol",
	"Icecream",
	"Pizza",
	"High suger foods/Drinks"
	
	};
	for(int i=0 ; i<20 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	cout<<endl;
	cout<<setw(5)<<"Food must be Avoid!";
	cout<<endl;
	for(int i=20;i<29;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	

	
	
	
	
	
	
	
	
	
}

void WeightGainMaleBMR(int age,float lbs,float inches)
	{
		system("color 0b");
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*6.23)+(inches*12.7)-(age*6.8);
		totalCalary=(BMR*1.2)+66;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.3)*4;//calory
		proteinmax=(kg*2.2)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
		//ProteinFoods();
		
		
							
	}
	float WeightGainFeMaleBMR(int age,float lbs,float inches)
	{
		system("color 0e");
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*4.3)+(inches*4.7)-(age*4.7);
		totalCalary=(BMR*1.2)+655;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.2)*4;//calory
		proteinmax=(kg*2.1)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);			
	}
	float WeightLoseMaleBMR(int age,float lbs,float inches)
	{
		system("color 0b");
		
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*6.23)+(inches*12.7)-(age*6.8);
		totalCalary=(BMR*1.2)-434;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.6)*4;//calory
		proteinmax=(kg*2.5)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
		
				
	}
	float WeightLoseFeMaleBMR(int age,float lbs,float inches)
	{
		system("color 0e");
		
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*4.3)+(inches*4.7)-(age*4.7);
		totalCalary=(BMR*1.2)+655;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.5)*4;//calory
		proteinmax=(kg*2.4)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
		
	}
float lightBodybuildingMale(int age,float lbs,float inches)
	{
		system("color 0b");
		int foodOPtion;
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*6.23)+(inches*12.7)-(age*6.8);
		totalCalary=(BMR*1.375)+566;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.6)*4;//calory
		proteinmax=(kg*2.5)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
		cout<<endl;
		//ProteinFoods();
		
		 			
	}
float lightBodybuildingFeMale(int age,float lbs,float inches)
	{
		system("color 0e");
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*4.3)+(inches*4.7)-(age*4.7);
		totalCalary=(BMR*1.375)+900;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.4)*4;//calory
		proteinmax=(kg*2.3)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
		
	}
	float ModarateBodybuildingMale(int age,float lbs,float inches)
	{
		system("color 0b");
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*6.23)+(inches*12.7)-(age*6.8);
		totalCalary=(BMR*1.55)+566;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.6)*4;//calory
		proteinmax=(kg*2.5)*4;
		fats=(totalCalary*0.3);//calary
		float totalProtein;
		totalProtein=(proteinmin+proteinmax);
		carbs=totalCalary-(totalProtein+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
		
	}
float ModarateBodybuildingFeMale(int age,float lbs,float inches)
	{
		system("color 0e");
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*4.3)+(inches*4.7)-(age*4.7);
		totalCalary=(BMR*1.55)+900;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.5)*4;//calory
		proteinmax=(kg*2.4)*4;
		fats=(totalCalary*0.3);//calary
		float totalProtein;
		totalProtein=(proteinmin+proteinmax);
		carbs=totalCalary-(totalProtein+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
	}
float ActiveBodybuildingMale(int age,float lbs,float inches)
	{
		system("color 0b");
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*6.23)+(inches*12.7)-(age*6.8);
		totalCalary=(BMR*1.725)+566;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.6)*4;//calory
		proteinmax=(kg*2.5)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
		
	}
float ActiveBodybuildingFeMale(int age,float lbs,float inches)
	{
		system("color 0e");
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*4.3)+(inches*4.7)-(age*4.7);
		totalCalary=(BMR*1.725)+900;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.5)*4;//calory
		proteinmax=(kg*2.4)*4;
		fats=(totalCalary*0.3);
		carbs=totalCalary-(fats+(proteinmin+proteinmax));
		//cout<<"Cabs	:"<<carbs<<"cal/day"<<"		"<<carbs/4.0178<<"g/day";
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
			
	}
 float PowerLifting(int age,float lbs,float inches)
 {
 		system("color 0b");
 	
 		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*6.23)+(inches*12.7)-(age*6.8);
		totalCalary=(BMR*1.725)+566;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.7)*4;//calory
		proteinmax=(kg*2.8)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
 		
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
	
 }


void GenderOption()
	{
		cout<<"(1) Male"<<endl;
		cout<<"(2) Female"<<endl;
	}
void weightManagementSublist()
	{
		cout<<"(1) Weight Gain"<<endl;
		cout<<"(2) Weight Lose"<<endl;
	}
void StrenghtSportSublist()
	{
		cout<<"(1)Body Building"<<endl;
		cout<<"(2)Power Lifting"<<endl;
		
	}
void BodybuildingCatogory()
	{
		
		cout<<"(1) Light>>"<<"	"<<"1-2 Workout Days/Week(time<1hrs)"<<endl;
		cout<<"(2) Modarate>>"<<"	"<<"3-5 Workout Days/Week(time<1hrs)"<<endl;
		cout<<"(3) Active>>"<<"	"<<"6-7 Workout Days/Week(time<1hrs)"<<endl;
	}
void dietfoods()
{
	//diets foods all in one array
	string foods[16]={"2-3 EggWhite","Redrice","Beans","Dhal","Oatmeal With with Freshmilk","chicken",
	"Rice","Boiled or grilled potatoes","Protein shake","fish/tuna<100g","vegetable","Fruits",
	"Nuts","peanut Butter","Cheese","bread and sandwiches 2/4 slies"};
		
	cout<<"Morning: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	cout<<"Lunch: "<<endl;
	for(int i=5 ; i<10 ; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	cout<<"Dinner"<<endl;
	for(int i=10;i<16;i++)
	{
			cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	
	
	
}
void weightlosemalediet()
{
	string weightlosefood[21]={"glass of Water","Coffee","GreenTea","Fresh Fruit juice","Lemon"," Redrice",
	"100g of chicken","beans","Dhal","Oatmeal","Avacodo","cup(100g) of Sweat Potetoe","vegetable of your choice",
	"chicken breast(100g)","fish(100g)/Egg salad","cup ofyoghurt/curd.Cheese.","	Cup of Tea with low suger",
	"Cashew nuts/wall nuts/peanuts<50g.19","bowl of chicken or mixed vegetable soup.","Bread sandwitch 2-3 and vegetables",
	"chicken breast/fish/ egg Salad"};
	cout<<"Early Morning"<<endl;
	for(int i=0 ; i<5 ; i++)
	{
		cout<<setw(5)<<"*"<<weightlosefood[i]<<endl;
	}
	cout<<"Breakfast"<<endl;
	for(int i=5;i<11;i++)
	{
		cout<<setw(5)<<"*"<<weightlosefood[i]<<endl;	
	}
	cout<<"Lunch"<<endl;
	for(int i=11 ; i<17;i++)
	{
		cout<<setw(5)<<"*"<<weightlosefood[i]<<endl;
	}
	cout<<"evening"<<endl;
	for(int i=17 ; i<19 ;i++)
	{
		cout<<setw(5)<<"*"<<weightlosefood[i]<<endl;
	}
	cout<<"Dinner"<<endl;
	for(int i=19;i<22;  i++)
	{
		cout<<setw(5)<<"*"<<weightlosefood[i]<<endl;
	}
		
	
	
	
}
void Lightdiet()
{
	string foods[18]={"Glass of protein smootheis","Banana","Cashew nut(100g)","Oat meal",
	"Cheese5","beans/dhal","Eggs(3)","Boiled Vegetable(100g)","Red Rice","Sweat Potatoes(100g)","Glass of protein shake",
	"Oatmeal","EggWhite(4)","Sanwiches(1-3)","Fruits","Cup of boiled vegetables","Glass of protein shake"};
	cout<<"Early Morning"<<endl;
	for(int i=0 ;i<5;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	cout<<"Breakfast"<<endl;
	for(int i=5 ; i<10 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Lunch"<<endl;
	for(int i=10 ; i<13 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Evening"<<endl;
	for(int i=13 ; i<15; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Dinner"<<endl;
	for(int i=15 ; i<17; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	
			
	
}
void modaratediet()
{
	
	string foods[18]={"Glass of protein smootheis","Banana","Cashew nut(100g)","Oat meal",
	"Cheese","beans/dhal","Eggs(4)/Chicken Breast(100g)","Boiled Vegetable(100g)","Red Rice(200g)","Sweat Potatoes(100g)","Glass of protein shake",
	"Oatmeal","EggWhite(4)","Sanwiches(1-3)","Fruits","Cup of boiled vegetables","Glass of protein shake"};
	cout<<"Early Morning"<<endl;
	for(int i=0 ;i<5;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	cout<<"Breakfast"<<endl;
	for(int i=5 ; i<10 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Lunch"<<endl;
	for(int i=10 ; i<13 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Evening"<<endl;
	for(int i=13 ; i<15; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Dinner"<<endl;
	for(int i=15 ; i<17; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	
		
}
void activediet()
{
	
	string foods[18]={"Glass of protein smootheis","Banana","Cashew nut(100g)","Oat meal",
	"Cheese","beans/dhal","Eggs(4)/Chicken Breast(100g)","Boiled Vegetable(100g)","Red Rice(200g)","Sweat Potatoes(100g)","Chicken breast(100g)",
	"Oatmeal","EggWhite(4)","Sanwiches(1-3)","Fruits","Cup of boiled vegetables","Eggwhite 4"};
	cout<<"Early Morning"<<endl;
	for(int i=0 ;i<5;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	cout<<"Breakfast"<<endl;
	for(int i=5 ; i<10 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Lunch"<<endl;
	for(int i=10 ; i<13 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Evening"<<endl;
	for(int i=13 ; i<15; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Dinner"<<endl;
	for(int i=15 ; i<17; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}	
	
	
}
void liftingdiet()
{
	
		
	string foods[18]={"Glass of protein smootheis","Banana/fruits","Cashew nut/almonds(150g)","Oat meal",
	"Cheese","beans/dhal","Eggs(5)/Chicken Breast(150g)","Boiled Vegetable(180g)","Red Rice(200g)","Sweat Potatoes(150g)","Chicken breast(200g)",
	"Oatmeal","EggWhite(5)","Sanwiches<5)","Fruits","Cup of boiled vegetables","Eggwhite 5"};
	cout<<"Early Morning"<<endl;
	for(int i=0 ;i<5;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;
	}
	cout<<"Breakfast"<<endl;
	for(int i=5 ; i<10 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Lunch"<<endl;
	for(int i=10 ; i<13 ;i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Evening"<<endl;
	for(int i=13 ; i<15; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}
	cout<<"Dinner"<<endl;
	for(int i=15 ; i<17; i++)
	{
		cout<<setw(5)<<"*"<<foods[i]<<endl;	
	}	
	
	
	
	
	
	
	
	
	
	
	
}

	



int main()

{
	int mainoption,weightMNGMNTOption,genderOption,bodyCatogory,strnthCatogory,age;
	float weight,height,lbs,inches,diet;
	cout<<fixed<<showpoint<<setprecision(2);
	
	do{
		
	cout<<endl;
	cout<<setw(70)<<"****FITNESS & NUTRITION TRCKER****"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"(0) Exit"<<endl;
	cout<<"(1) BMI Calculator"<<endl;
	cout<<"(2) Weight Manager"<<endl;
	cout<<"(3) Strength Sport"<<endl;
	cout<<".................."<<endl;
	cout<<endl;
	cout<<"Main Menu: ";
	cin>>mainoption;
	if(cin.fail())
	{
		cin.clear();
		cin.ignore(100,'\n');
		cout<<"Invalid Input !"<<endl;
		system("cls");
	}
	else
	{
		switch(mainoption)
		{
			
			case 0:cout<<"Have a Healthy Day !"<<endl;break;
			case 1:
				BMICalculator();break;
			break;
			case 2:
				weightManagementSublist();
				cout<<"Option: ";
				cin>>weightMNGMNTOption;
				while(cin.fail() || weightMNGMNTOption<1 ||weightMNGMNTOption>2)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error ! Please Input between 1-2: ";
					
					cin>>weightMNGMNTOption;
					
					
					
				}
				switch(weightMNGMNTOption)
				{
					case 1://gain
							GenderOption();
							cout<<"Option: ";
							cin>>genderOption;
							while(cin.fail() || genderOption<1 || genderOption>2)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error ! Please Input between 1-2: ";
								cin>>genderOption;	
							}
						switch(genderOption)
						{
								case 1://male
									while(genderOption<1 ||genderOption>2)
									{
										
										cout<<"Error ! Please Input between 1-2: ";
										cin>>genderOption;
										//system("cls");
										
										
									}
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error.Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									WeightGainMaleBMR(age,lbs,inches);
									int diet;
									cout<<endl;
									cout<<"Approximate Diet plan press(1): ";
									cin>>diet;
											while(cin.fail() || diet!=1)
											{
												cin.clear();
												cin.ignore(100,'\n');
												cout<<"Error! Enter just (1): ";
												cin>>diet;
												
												
											}
											dietfoods();
											proteinList();
									
									
									
								break;
								case 2://female
									
									while(genderOption<1 ||genderOption>2)
									{
											
										cout<<"Error ! Please Input between 1-2: ";
										cin>>genderOption;
											//system("cls");
											
											
									}
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>60)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error.Please Enter Valid Age: ";
										cin>>age;
									}
										cout<<"Weight(kg): ";
										cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error.Please Enter Valid Weight: ";
										cin>>weight;	
									}
										cout<<"Height(Ft): ";
										cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									lbs=(height*12);
									WeightGainFeMaleBMR(age,lbs,inches);
									int dietplanfemale;
									cout<<endl;
									cout<<"Approximate Diet plan press(1): ";
									cin>>dietplanfemale;
											while(cin.fail() || dietplanfemale!=1)
											{
												cin.clear();
												cin.ignore(100,'\n');
												cout<<"Error!Enter just (1): ";
												cin>>dietplanfemale;
											
												
											}
												dietfoods();
												proteinList();
											
																						
																	
																	
																								
								
								break;
								default:cout<<"Error: Enter Digit between 1-2"<<endl;
						}
						
						
					break;
					case 2://lose
						GenderOption();
						cout<<"Option: ";
							cin>>genderOption;
							while(cin.fail() || genderOption<1 || genderOption>2)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error ! Please Input between 1-2: ";
								cin>>genderOption;	
							}
							switch(genderOption)
							{
								case 1://male
								
									while(genderOption<1 ||genderOption>2)
									{
										
										cout<<"Error ! Please Input between 1-2: ";
										cin>>genderOption;
										//system("cls");
										
										
									}
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error.Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error.Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error.Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									WeightLoseMaleBMR(age,lbs,inches);
									//lose diet
									cout<<endl;
									
									cout<<"Approximate diet plan press(1): ";
									
									cin>>diet;
									while(cin.fail() || diet !=1)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error: Press(1): ";
										cin>>diet;
									}
									weightlosemalediet();
																	
								
								
								
								break;
								case 2://female
										
									while(genderOption<1 ||genderOption>2)
									{
										
										cout<<"Error ! Please Input between 1-2: ";
										cin>>genderOption;
										//system("cls");
										
										
									}
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									WeightLoseFeMaleBMR(age,lbs,inches);
									cout<<endl;
									cout<<"Approximate diet plan press(1): ";
									cin>>diet;
									while(cin.fail() || diet!=1)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error! just Press(1): ";
										cin>>diet;
									}
									cout<<endl;
									dietfoods();
							
								
								break;
								default:cout<<"Error: Enter Digit between 1-2"<<endl;
							}
						
						
						
						
						
						
						
					break;
					default:cout<<"Error: Enter Digit between 1-2"<<endl;
				}
							
				
			break;
			case 3://strenth
				StrenghtSportSublist();
				cout<<"Option: ";
				cin>>strnthCatogory;
				while(cin.fail() || strnthCatogory<1 || strnthCatogory>2)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error ! Please Input between 1-2: ";
					cin>>strnthCatogory;	
				}
				switch(strnthCatogory)
				{
					case 1://bodybuilding
				 		BodybuildingCatogory();
				 		cout<<"Option: ";
				 		cin>>bodyCatogory;
				 		while(cin.fail() || bodyCatogory<1 || bodyCatogory>3)
					{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error ! Please Input between 1-3: ";
					cin>>bodyCatogory;	
					}
					switch(bodyCatogory)
					{
						case 1://light
							GenderOption();
							cout<<"Option: ";
							cin>>genderOption;
							while(cin.fail() || genderOption<1 || genderOption>2)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error ! please Input between 1-2: ";
								cin>>genderOption;
							}
							switch(genderOption)
							{
								case 1://male
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error.Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									lightBodybuildingMale(age,lbs,inches);	
									//diet
									cout<<endl;
									cout<<"Approximate Diet plan press(1): ";
									cin>>diet;
											while(cin.fail() || diet!=1)
											{
												cin.clear();
												cin.ignore(100,'\n');
												cout<<"Error! Enter just (1): ";
												cin>>diet;
											
												
											}
									
									Lightdiet();
									proteinList();
									
								break;
								case 2://female
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									lightBodybuildingFeMale(age,lbs,inches);
									cout<<endl;
									cout<<"Approximate Diet plan press(1): ";
									cin>>diet;
											while(cin.fail() || diet!=1)
											{
												cin.clear();
												cin.ignore(100,'\n');
												cout<<"Error! Enter just (1): ";
												cin>>diet;
											
												
											}
									
									Lightdiet();
									proteinList();
									
								
									
									
								break;
								default:cout<<"Error ! Please Input between 1-2";
							}
						break;
						case 2://modarate
							GenderOption();
							cout<<"Option: ";
							cin>>genderOption;
							while(cin.fail() || genderOption<1 || genderOption>2)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error ! please Input between 1-2: ";
								cin>>genderOption;
							}
							switch(genderOption)
							{
								case 1://male
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									ModarateBodybuildingMale(age,lbs,inches);
									cout<<endl;
									cout<<"Approximate Diet plan press(1): ";
									cin>>diet;
											while(cin.fail() || diet!=1)
											{
												cin.clear();
												cin.ignore(100,'\n');
												cout<<"Error: Enter just (1): ";
												cin>>diet;
											
												
											}
									modaratediet();
									proteinList();
									
								
								break;
								case 2://female
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									ModarateBodybuildingFeMale(age,lbs,inches);
									cout<<endl;
									cout<<"Approximate Diet plan press(1): ";
									cin>>diet;
											while(cin.fail() || diet!=1)
											{
												cin.clear();
												cin.ignore(100,'\n');
												cout<<"Error! Enter just (1): ";
												cin>>diet;
											
												
											}
									modaratediet();
									proteinList();
								
								break;
								default:cout<<"Error ! Please Input between 1-2";
							}
					
						break;
						case 3://active
							GenderOption();
							cout<<"Option: ";
							cin>>genderOption;
							while(cin.fail() || genderOption<1 || genderOption>2)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error ! please Input between 1-2: ";
								cin>>genderOption;
							}
							switch(genderOption)
							{
								case 1://male
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>9)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									ActiveBodybuildingMale(age,lbs,inches);
									cout<<endl;
									cout<<"Approximate Diet plan press(1): ";
									cin>>diet;
											while(cin.fail() || diet!=1)
											{
												cin.clear();
												cin.ignore(100,'\n');
												cout<<"Error: Enter just (1): ";
												cin>>diet;
											
												
											}
									activediet();
									proteinList();
									
								
								
								break;
								case 2://female
									cout<<"Age: ";
									cin>>age;
									while(cin.fail() || age<15 ||age>55)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Age: ";
										cin>>age;
									}
									cout<<"Weight(kg): ";
									cin>>weight;
									while(cin.fail() || weight<20 || weight>150)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Weight: ";
										cin>>weight;	
									}
									cout<<"Height(Ft): ";
									cin>>height;
									while(cin.fail() || height<2 || height>10)
									{
										cin.clear();
										cin.ignore(100,'\n');
										cout<<"Error!Please Enter Valid Height: ";
										cin>>height;	
									}
									lbs=(weight*2.2);
									inches=(height*12);
									ActiveBodybuildingFeMale(age,lbs,inches);
									cout<<endl;
									cout<<"Approximate Diet plan press(1): ";
									cin>>diet;
											while(cin.fail() || diet!=1)
											{
												cin.clear();
												cin.ignore(100,'\n');
												cout<<"Error: Enter just (1): ";
												cin>>diet;
											
												
											}
									activediet();
									proteinList();
								
								break;
								default:cout<<"Error ! Please Input between 1-2";
							}
							
							
						break;
						default:cout<<"Error: Enter Digit between 1-3"<<endl;
					}
				 		
		
					
					break;
					case 2://powerLifting
						cout<<"Age: ";
						cin>>age;
						while(cin.fail() || age<15 ||age>55)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error!Please Enter Valid Age: ";
								cin>>age;
							}
							cout<<"Weight(kg): ";
							cin>>weight;
							while(cin.fail() || weight<20 || weight>150)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error!Please Enter Valid Weight: ";
								cin>>weight;	
							}
							cout<<"Height(Ft): ";
							cin>>height;
							while(cin.fail() || height<2 || height>10)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error!Please Enter Valid Height: ";
								cin>>height;	
							}
							lbs=(weight*2.2);
							inches=(height*12);
							PowerLifting(age,lbs,inches);
							cout<<endl;
							cout<<"Approximate Diet plan press(1): ";
							cin>>diet;
							while(cin.fail() || diet!=1)
							{
								cin.clear();
								cin.ignore(100,'\n');
								cout<<"Error! Enter just (1): ";
								cin>>diet;
							}
							liftingdiet();
							proteinList();
					
					break;
					default:cout<<"Error! Enter Digit between 1-2"<<endl;
				}
				
				
				
			break;
			
			default:cout<<"Error: Enter Digit between 1-4"<<endl;
			system("cls");
			
			
		}
		
	}
	
	}while(mainoption!=0);
		

	
	
	
}

void BMICalculator()
{
	
	float bmi,weight,height,lbs,inches;
	int BMIOption,age,mealdiat,food,weightPreferance;
	//do{
		
		cout<<setw(60)<<"****BODY MASS INDEX****"<<endl;
		cout<<endl;
		cout<<"In (Kgs) press(1)"<<endl;;
		cout<<"In (lbs) press(2)";
		cout<<endl;
		cout<<endl;
		cout<<"weight Preferance: ";
		cin>>weightPreferance;
		while(cin.fail() || weightPreferance<1 ||weightPreferance>2)
		{
			cin.clear();
			cin.ignore(100,'\n');
			cout<<"Error! Enter betwen 1-2: ";
			cin>>weightPreferance;
		}
		switch(weightPreferance)
		{
			
			case 1:
				
				cout<<"Enter Your weight(kg): ";
				cin>>weight;
				while(cin.fail() || weight<10 || weight>150)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Enter Valid Weight(kg): ";
					cin>>weight;
				}
				
			break;
			case 2:
				cout<<"Enter Your weight(lbs): ";
				cin>>lbs ;
				while(cin.fail() || lbs<20 || lbs>340)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Enter Valid Weight(lbs): ";
					cin>>lbs;
				}
				weight=(lbs/2.2);
					
			break;
			default:cout<<"Invalid INput"<<endl;
			
			
		}
		
		
		
		
		
			cout<<"Enter Height(Ft): ";
			cin>>height;
			while(cin.fail() || height<2 || height>=10 )
			
			{
				cin.clear();
				cin.ignore(100,'\n');
				cout<<"Error! Enter Valid Height(Ft): ";
				cin>>height;
				//system("cls");
			}
			
			float metres;
			metres=(height*0.3048);
			bmi=weight/(metres * metres);
			if(bmi<18)
			{	system("color 0c");//red
				cout<<endl;
				cout<<"BMI"<<setw(11)<<":"<<bmi<<endl;
				cout<<endl;
				cout<<"BMI Catogory"<<setw(2)<<":"<<" Under Weight"<<endl;
				cout<<"Health Risk"<<setw(3)<<":"<<" MalNutrition"<<endl;
				cout<<endl;
				cout<<"Simply Enter Your Age for Get your Diatary Calories  !"<<endl;
				cout<<"Age: ";
				cin>>age;
				while(cin.fail() || age<8 || age>55)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Erro !Enter Valid Age: ";
					cin>>age;
				}
				
				lbs=(weight*2.2);
				inches=(height*12);
				BMIWeightGain(age,lbs,inches);
				cout<<endl;
				cout<<"Recommandations press(1): ";
				cin>>food;
				while(cin.fail() || food !=1 )
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error! press (1): ";
					cin>>food;
				}
				
				
				
					fstream myfile;
					myfile.open("BMIGAIN.txt",ios::in);
					if(myfile.is_open())
					{
						string line;
						while(getline(myfile,line))
						{
							cout<<line<<endl;
						}
						myfile.close();
					}
					cout<<endl;
					cout<<endl;
					cout<<setw(5)<<"See an example of a 3000+ calories diet plan for weight gain based on Srilanka meal preferences."<<endl;
					cout<<endl;
					cout<<"Press(2): ";
					
					cin>>mealdiat;
					cout<<endl;
					while(cin.fail() || mealdiat!=2)
					{
						cin.clear();
						cin.ignore(100,'\n');
						cout<<"Error !Enter just (2): ";
						cin>>mealdiat;
					}
					fstream diattext;
					diattext.open("BMIGAINdiet.txt",ios::in);
					if(diattext.is_open())
					{
						string line;
						while(getline(diattext,line))
						{
							cout<<line<<endl;
						}
						diattext.close();
					}
					cout<<endl;
					cout<<setw(10)<<"You must Avoid These Foods.."<<endl;;
				
					
					string avoidfood[4]={"Freid Foods","Refined Foods","Sugar Rich Foods","Carbonated Drinks"};
					for(int i=0 ; i<4 ; i++)
					{
						cout<<setw(10)<<"*"<<avoidfood[i]<<endl;
					}
	
				
			}
			else if(bmi>=18 && bmi<25) //|| bmi<25)
			{
				system("color 0b");//blue
				cout<<"BMI"<<setw(11)<<":"<<bmi<<endl;
				cout<<endl;
				cout<<"BMI Catogory"<<setw(2)<<":"<<"Normal Weight "<<endl;
				cout<<"Health Risk"<<setw(3)<<":"<<"No Risk"<<endl;
				cout<<endl;
				cout<<"Magage Your Fitness Well !"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Recommandations press(1): ";
			
			
				cin>>food;
				while(cin.fail() || food !=1 )
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error!press(1) ";
					cin>>food;
				}
					cout<<endl;
					cout<<endl;
					fstream maintainmyfile;
					maintainmyfile.open("BMImaintain.txt",ios::in);
					if(maintainmyfile.is_open())
					{
						string line;
						while(getline(maintainmyfile,line))
						{
							cout<<line<<endl;
						}
						maintainmyfile.close();
					}
				
				
				
			}
			else if(bmi>=25 && bmi<30)
			{
				system("color 0c");	//red
				cout<<endl;
				cout<<"BMI"<<setw(11)<<":"<<bmi<<endl;
				cout<<endl;
				cout<<"BMI Catogory"<<setw(2)<<":"<<"Over Weight "<<endl;
				cout<<"Health Risk"<<setw(3)<<":"<<"Enhance Risk "<<endl;
				cout<<endl;
				cout<<"Simply Enter Your Age for Get your Diatary Calories  !"<<endl;
				cout<<"Age: ";
				cin>>age;
				while(cin.fail() || age<9 || age>55)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Erro !Enter Valid Age: ";
					cin>>age;
				}
				
				lbs=(weight*2.2);
				inches=(height*12);
				BMIweightLose(age,lbs,inches);
				cout<<endl;
				cout<<"Recommandations press(1): ";
				cin>>food;
				cout<<endl;
				while(cin.fail() || food !=1 )
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error: ";
					cin>>food;
				}
				
					fstream losemyfile;
					losemyfile.open("BMILOSE.txt",ios::in);
					if(losemyfile.is_open())
					{
						string line;
						while(getline(losemyfile,line))
						{
							cout<<line<<endl;
						}
						losemyfile.close();
					}
					cout<<endl;
					cout<<"See an example of a Cut 250+ calories diet plan for weight gain based on Srilanka meal preferences.";
					cout<<endl;
					cout<<"Press(2): ";
					
					cin>>mealdiat;
					while(cin.fail() || mealdiat!=2)
					{
						cin.clear();
						cin.ignore(100,'\n');
						cout<<"Error !Enter just (2): ";
						cin>>mealdiat;
					}
					cout<<endl;
					fstream WLdiattext;
					WLdiattext.open("BMILOSEdiet.txt",ios::in);
					if(WLdiattext.is_open())
					{
						string line;
						while(getline(WLdiattext,line))
						{
							cout<<line<<endl;
						}
						WLdiattext.close();
					}
					cout<<endl;
					cout<<setw(10)<<"You must Avoid These Foods..";
					cout<<endl;
					string avoidfood[10]={"Freid Foods","Refined Foods","Sugar Rich Foods","Carbonated Drinks","White Bread","Pastries and cakes","Alcohol","Icecream","Pizza","High suger foods/Drinks"};
					for(int i=0 ; i<10 ; i++)
					{
						cout<<setw(10)<<"*"<<avoidfood[i]<<endl;
					}
					
				
				
				
			}
			else if(bmi>=30 && bmi<35)
			{
				system("color 0c");
				cout<<endl;
				cout<<"BMI"<<setw(11)<<":"<<bmi<<endl;
				cout<<endl;
				cout<<"BMI Catogory"<<setw(2)<<":"<<"Modarately Obese "<<endl;
				cout<<"Health Risk"<<setw(3)<<":"<<"Medium Risk"<<endl;
				cout<<endl;
				cout<<"Lose Your Weight You are in Risk !"<<endl;
				cout<<"Simply Enter Your Age for Get your Diatary Calories  !"<<endl;
				cout<<"Age: ";
				cin>>age;
				while(cin.fail() || age<9 || age>55)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Erro !Enter Valid Age: ";
					cin>>age;
				}
				
				lbs=(weight*2.2);
				inches=(height*12);
				BMIweightLose(age,lbs,inches);
				cout<<endl;
				cout<<"Recommandations press(1): ";
				cin>>food;
				
				while(cin.fail() || food !=1 )
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error!press(1) ";
					cin>>food;
				}
				
				cout<<endl;
				
					fstream WLmodmyfile;
					WLmodmyfile.open("BMImod.txt",ios::in);
					if(WLmodmyfile.is_open())
					{
						string line;
						while(getline(WLmodmyfile,line))
						{
							cout<<line<<endl;
						}
						WLmodmyfile.close();
					}
					cout<<endl;
					cout<<"See an example of a Cut 500+ calories diet plan for weight gain based on Srilanka meal preferences.";
					cout<<endl;
					cout<<"Press(2): ";
					
					cin>>mealdiat;
					cout<<endl;
					while(cin.fail() || mealdiat!=2)
					{
						cin.clear();
						cin.ignore(100,'\n');
						cout<<"Error !Enter just (2): ";
						cin>>mealdiat;
					}
					cout<<endl;
					fstream WLmoddiattext;
					WLmoddiattext.open("BMImoddiet.txt",ios::in);
					if(WLmoddiattext.is_open())
					{
						string line;
						while(getline(WLmoddiattext,line))
						{
							cout<<line<<endl;
						}
						WLmoddiattext.close();
					}
					
					cout<<endl;
					cout<<setw(10)<<"You must Avoid These Foods..";
					cout<<endl;
					string avoidfood[10]={"Freid Foods","Refined Foods","Sugar Rich Foods","Carbonated Drinks","White Bread","Pastries and cakes","Alcohol","Icecream","Pizza","High suger foods/Drinks"};
					for(int i=0 ; i<10 ; i++)
					{
						cout<<setw(10)<<"*"<<avoidfood[i]<<endl;
					}
					
					  
					
			}
			else if(bmi>=35 && bmi<40)
			{
				system("color 0c");
				cout<<endl;
				cout<<"BMI"<<setw(11)<<":"<<bmi<<endl;
				cout<<endl;
				cout<<"BMI Catogory"<<setw(2)<<":"<<"Serverley Obese "<<endl;
				cout<<"Health Risk"<<setw(3)<<":"<<" High Risk "<<endl;
				cout<<endl;
				cout<<"Your are In Danger !"<<endl;	
				cout<<"Simply Enter Your Age for Get your Diatary Calories  !"<<endl;
				cout<<"Age: ";
				cin>>age;
				while(cin.fail() || age<9 || age>55)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Erro !Enter Valid Age: ";
					cin>>age;
				}
				
				lbs=(weight*2.2);
				inches=(height*12);
				BMIweightLose(age,lbs,inches);
				cout<<"Recommandations press(1): ";
				cin>>food;
				cout<<endl;
				while(cin.fail() || food !=1 )
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error: ";
					cin>>food;
				}
				
					cout<<endl;
				
					fstream WLsevmyfile;
					WLsevmyfile.open("BMIserv.txt",ios::in);
					if(WLsevmyfile.is_open())
					{
						string line;
						while(getline(WLsevmyfile,line))
						{
							cout<<line<<endl;
						}
						WLsevmyfile.close();
					}
					cout<<endl;
					cout<<"See an example of a Cut 750+ calories diet plan for weight gain based on Srilanka meal preferences.";
					cout<<endl;
					cout<<"Press(2): ";
					
					cin>>mealdiat;
					while(cin.fail() || mealdiat!=2)
					{
						cin.clear();
						cin.ignore(100,'\n');
						cout<<"Error !Enter just (2): ";
						cin>>mealdiat;
					}
					cout<<endl;
					fstream WLsevdiattext;
					WLsevdiattext.open("BMImoddiet.txt",ios::in);
					if(WLsevdiattext.is_open())
					{
						string line;
						while(getline(WLsevdiattext,line))
						{
							cout<<line<<endl;
						}
						WLsevdiattext.close();
					}
					cout<<endl;
					
					cout<<setw(10)<<"You must Avoid These Foods..";
					cout<<endl;
					string avoidfood[10]={"Freid Foods","Refined Foods","Sugar Rich Foods","Carbonated Drinks","White Bread","Pastries and cakes","Alcohol","Icecream","Pizza","High suger foods/Drinks"};
					cout<<endl;
					for(int i=0 ; i<10 ; i++)
					{
						cout<<setw(10)<<"*"<<avoidfood[i]<<endl;
					}
					
			}
			else if(bmi>=40)
			{
				system("color 0c");
				cout<<"BMI"<<setw(11)<<":"<<bmi<<endl;
				cout<<endl;
				cout<<"BMI Catogory"<<setw(2)<<":"<<"very Serverley Obese "<<endl;
				cout<<"Health Risk"<<setw(3)<<":"<<"Extremly on Risk "<<endl;
				cout<<endl;
				cout<<"Your are In Danger !"<<endl;	
				cout<<"Simply Enter Your Age for Get your Diatary Calories  !"<<endl;
				cout<<"Age: ";
				cin>>age;
				while(cin.fail() || age<9 || age>55)
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Erro !Enter Valid Age: ";
					cin>>age;
				}
				
				lbs=(weight*2.2);
				inches=(height*12);
				BMIweightLose(age,lbs,inches);
				cout<<"Recommandations press(1): ";
				cin>>food;
				cout<<endl;
				while(cin.fail() || food !=1 )
				{
					cin.clear();
					cin.ignore(100,'\n');
					cout<<"Error!press(1): ";
					cin>>food;
				}
				
				
					cout<<endl;
					fstream WLexmyfile;
					WLexmyfile.open("BMILast.txt",ios::in);
					if(WLexmyfile.is_open())
					{
						string line;
						while(getline(WLexmyfile,line))
						{
							cout<<line<<endl;
						}
						WLexmyfile.close();
					}
					cout<<endl;
					cout<<"See an example of a Cut 1000+ calories diet plan for weight gain based on Srilanka meal preferences.";
					cout<<endl;
					cout<<"Press(2): ";
					
					cin>>mealdiat;
					while(cin.fail() || mealdiat!=2)
					{
						cin.clear();
						cin.ignore(100,'\n');
						cout<<"Error !Enter just (2): ";
						cin>>mealdiat;
					}
					fstream WLexiattext;
					WLexiattext.open("BMILastexdiet.txt",ios::in);
					if(WLexiattext.is_open())
					{
						string line;
						while(getline(WLexiattext,line))
						{
							cout<<line<<endl;
						}
						WLexiattext.close();
					}
					cout<<endl;
				
					cout<<setw(10)<<"You must Avoid These Foods..";
					cout<<endl;
					string avoidfood[10]={"Freid Foods","Refined Foods","Sugar Rich Foods","Carbonated Drinks","White Bread","Pastries and cakes","Alcohol","Icecream","Pizza","High suger foods/Drinks"};
					cout<<endl;
					for(int i=0 ; i<10 ; i++)
					{
						cout<<setw(10)<<"*"<<avoidfood[i]<<endl;
					}
					
			}

		
			
}
	int BMIWeightGain(int age,float lbs,float inches)
	{
		
		system("color 0b");
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*8.38)+(inches*15.05)-(age*9.15);
		totalCalary=(BMR*1.2)+393;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.3)*4;//calory
		proteinmax=(kg*2.2)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);
		
		
	}
	
	
	
	int BMIweightLose(int age,float lbs,float inches)
	{
		
		
		double BMR,totalCalary,proteinmin,proteinmax,fats,carbs;
		BMR=(lbs*8.38)+(inches*15.08)-(age*9.15);
		totalCalary=(BMR*1.2)-760;
		float kg;
		kg=(lbs/2.2);
		proteinmin=(kg*1.6)*4;//calory
		proteinmax=(kg*2.5)*4;
		fats=(totalCalary*0.3);//calary
		carbs=totalCalary-(proteinmin+proteinmax+fats);
		NutritionMenu(proteinmin,proteinmax,fats,carbs,totalCalary);	
		
		
	}
	
			
	
