#include <iostream>

using namespace std;

int main() {
	string horoscope;
	cout<<"Aries\n";
	cout<<"Taurus\n";
	cout<<"Gemini\n";
	cout<<"Cancer\n";
	cout<<"Leo\n";
	cout<<"Virgo\n";
	cout<<"Libra\n";
	cout<<"Scorpio\n";
	cout<<"Saguittarius\n";
	cout<<"Capricorn\n";
	cout<<"Aquarius\n";
	cout<<"Pices\n";
	
	cout<<"Type your Horoscope:";
		
		cin>>horoscope;
		
		if(horoscope =="aries"|| horoscope =="Aries")
		{
			cout<<"\nYour Horoscope is Aries\n"<<endl;
			cout<<"New ideas have a way of intimidating some people, but definitely not you.";
		
		}
		else if(horoscope =="taurus"|| horoscope =="Taurus")
		{
			cout<<"\nYour Horoscope is Taurus\n";
			cout<<"Making order out of the chaos that surrounds you today will bring a deep sense of accomplishment, not to mention clarity.";
		}
	
		
		else if(horoscope=="gemini"||horoscope=="Gemini")
		{
			cout<<"\nYour Horoscope is Gemini\n";
			cout<<"Someone from the past will come back into your life today, and you'll find that this person has radically changed.";
		}
		
		else if(horoscope=="cancer"||horoscope=="Cancer")
		{
			cout<<"\nYour Horoscope is Canser\n";
			cout<<"Teamwork can be a magical thing that helps a group of people create new, innovative ideas where only opinions existed before.";
		}
		
		else if(horoscope=="leo"||horoscope=="Leo")
		{
			cout<<"\nYour Horoscope is Leo\n";
			cout<<"You feel ready to go on to the next level; however, it looks as though you're the only one right now.";
		}
		
		else if(horoscope=="virgo"||horoscope=="Virgo")
		{
			cout<<"\nYour Horoscope is Virgo\n";
			cout<<"Want to learn something new today? Take your big to-do list, put it in a blender and press 'puree'.";
		}
		
		else if(horoscope=="libra"||horoscope=="Libra")
		{
			cout<<"\nYour Horoscope is Libra\n";
			cout<<"Creating an intellectual connection with someone else is easier than you think -- it just requires that you be bold.";
		}
		
		else if(horoscope=="scorpio"||horoscope=="Scorpio")
		{
			cout<<"\nYour Horoscope is Scorpio\n";
			cout<<"The interior decorator deep inside of you is rearing its beautifully coiffured head today!";
		}
		
		else if(horoscope=="saguitarius"||horoscope=="Saquitarius")
		{
			cout<<"\nYour Horoscope Saguitarius is\n";
			cout<<" It takes a lot of energy to meet new people, so if you aren't exactly in a social-butterfly mood, the people in your life need to be understanding.";
		}
		
		else if(horoscope=="capricorn"||horoscope=="Capricorn")
		{
			cout<<"\nYour Horoscope is Capricorn\n";
			cout<<"This is not a very good time for you to be starting something new, especially if the new venture involves a great deal of risk.";
		}
		
	else if(horoscope=="aquarius"||horoscope=="Aquarius")
		{
			cout<<"\nYour Horoscope is Aquarius\n";
			cout<<"If you feel as though no one understands where you're coming from today, don't be surprised.";
		}
		
		else if(horoscope=="pisces"||horoscope=="Pisces")
		{
			cout<<"\nYour Horoscope is Pisces\n";
			cout<<" Lately, your eagerness to please other people is at odds with your available time -- it looks as though you are due for some major reprioritizing.";
		}
	else{
		cout<<"\n\nThe Horoscope you entered is wrong spelling or invalid ";
	}
}
