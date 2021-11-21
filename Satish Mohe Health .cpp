# include <iostream>
# include <cstring>
using namespace std;

int main() {

    int ch,a,age,dp,sp,pp;
    char name[20];
	cout<<" Enter Your Name : \n " ;
	cin>>name;
	cout<<" Enter Your Age : \n " ;
	cin>>age;
	do{
    cout << " Choose your options : \n ";
    cout << " 1. Blood Pressure Diagnosis \n 2. Diseases informations \n 3. Emergency Contact numbers \n ";
    cin >> a;
if(a==1)
{

            cout<<" Blood Pressure Diagnosis \n Enter your systolic pressure \n";
	    cin>>sp;
	    cout<<"Enter your diastolic pressure \n";
	    cin>>dp;
            pp=sp-dp;
	    cout<<"Your Pulse pressure is : "<<pp <<" \n ";
	    if(pp>=40 && pp<=60)
	     {
		cout<<"Hello " <<name<<" Your Pulse pressure is Normal \n ";
		}
	      if(pp>60)
	     {
		cout<<"Hello " <<name<<" Your Pulse pressure is High \n ";
		}
	if(pp<40)
	     {
		cout<<"Hello " <<name<<" Your Pulse pressure is Low \n ";
		}
  }
if(a==3)
{
cout<<"Here are few emergency contact numbers \n NATIONAL EMERGENCY NUMBER-112. POLICE-100. FIRE-101. AMBULANCE-102.";
}
if(a==2)
{
cout<<"Select your Choice \n 1. Heart Disease \n 2. Cancer \n 3. Stroke \n 4. Alzheimer’s disease \n 4. Close \n " ;
cin>>ch;
switch(ch)
{
case 1:
            cout <<" Heart disease \n\n More common among: \n men \n people who smoke\n people who are overweight or obese \n people with a family history of heart disease or heart attack \n people over age 55 \n **What causes heart disease?** \n Heart disease is a term used to describe a range of conditions that affect your heart and blood vessels.\n \n **These conditions include: **\n heart arrhythmias (irregular heartbeats) \ncoronary artery disease (blocked arteries) \nheart defects \n\n** Tips for prevention ** \nLifestyle changes can prevent many cases of heart disease, such as the following:\nQuit smoking.\nEat a healthier diet.\nExercise at least 30 minutes per day, five days a week.\nMaintain a healthy weight.";
            break;

        case 2 :
            cout <<" Cancer \n More common among: \n\n Each type of cancer has a specific set of risk factors, but several risk factors are common among multiple types.\n\n These risk factors include: \n people of a certain age \n people who use tobacco and alcohol \n people exposed to radiation and a lot of sunlight \n people with chronic inflammation \n people who are obese \n people with a family history of the disease \n What causes cancer? \n Cancer is the result of rapid and uncontrolled cell growth in your body. \n  A normal cell multiplies and divides in a controlled manner. \n Sometimes, those instructions become scrambled. When this happens, the cells begin to divide at an uncontrolled rate. This can develop into cancer. \n\n Tips for prevention \n There’s no clear way to avoid cancer. But certain behaviors have been linked to increased cancer risk, like smoking. Avoiding those behaviors may help you cut your risk. \n  Good changes to your behaviors include things like: \n Maintain a healthy weight \n Eat a balanced diet and exercise regularly. \n Quit smoking and drink in moderation. \n Avoid direct exposure to the sun for extended periods of time. Don’t use tanning beds. \n Have regular cancer screenings, including skin checks, mammograms, prostate exams, and more. " ;      
      break;

        case 3 :
            cout <<" Stroke \n\n More common among: \nmen \nwomen using birth control \npeople with diabetes \npeople with high blood pressure \npeople with heart disease \npeople who smoke \n \nWhat causes a stroke? \nA stroke occurs when the blood flow to your brain is cut off. Without oxygen-rich blood flowing to your brain, your brain cells begin to die in a matter of minutes. \n The blood flow can be stopped because of a blocked artery or bleeding in the brain. This bleeding may be from an aneurysm or a broken blood vessel.\n\n Tips for prevention\n Many of the same lifestyle changes that can reduce your risk for heart disease can also reduce your risk for stroke:\n Maintain a healthy weight. Exercise more and eat healthier.\n Manage your blood pressure.\n Stop smoking. Drink only in moderation.\n Manage your blood sugar level and diabetes.\n Treat any underlying heart defects or diseases.\n " ;
            break;
case 4 :
            cout <<" Alzheimer’s disease \n\n More common among: \n women \n people over age 65 (the risk for Alzheimer’s doublesTrusted Source every five years after age 65) \n people with a family history of the disease \n What causes Alzheimer’s disease? \n The cause of Alzheimer’s disease is unclear, but researchers and doctors believe a combination of a person’s genes, lifestyle, and environment impacts the brain over time.\n Some of these changes occur years, even decades, before the first symptoms appear. \n \n Tips for prevention \n While you can’t control your age or genetics, which are two of the most common risk factors for this disease. \n  you can control certain lifestyle factors that may increase your risk for it by doing the following:\n Exercise more often than not. Remain physically active throughout your life. \n Eat a diet filled with fruits, vegetables, healthy fats, and reduced sugar. \n Treat and monitor any other chronic diseases you have. \n Keep your brain active with stimulating ks like conversation, puzzles, and reading. " ;
            break;
}

}
}
while(a!=4);
           return 0;
}