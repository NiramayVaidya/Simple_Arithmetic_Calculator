#include<iostream>
using namespace std;

class Planet {
	string name;
	string color;
	float gravity;
	float astronaut_weight;
	int i;
	void calculateWeight(float mass) {
		astronaut_weight = mass * gravity;	
	}
	void displayInformation() {
		cout << "planet name is: " << name << endl;
		cout << "planet color is: " << color << endl;
		cout << "gravity of planet is: " << gravity << endl;
		cout << "Your weight is: " << astronaut_weight << endl;
	}
	int planetName(string name) {
		if(name == this->name) {
			return 1;
		}
		else {
			return 0;
		}
	}
	Planet(name, color, gravity, mass) {
		this->name = name;
		this->color = color;
		this->gravity = gravity;
		calculateWeight(mass);
	};
	public:
	void display_Information() {
		displayInformation();
	}
	int planet_name(string name) {
		return planetName(name);
	}
};

int main() {
	float mass;
	string name;
	int i, count = 0;
	cout << "Enter your mass: ";
	cin >> mass;
	Planet* planets;// = //{Planet::Planet("Mercury", "dark grey", 3.7, mass), Planet("Venus", "yellowish white/reddish brown", 8.87, mass), Planet("Earth", "blueish white", 9.81, mass), Planet("Mars", "red", 3.711, mass), Planet("Jupiter", "yellow", 24.79, mass), Planet("Saturn", "bluish", 10.44, mass), Planet("Uranus", "blue", 8.69, mass), Planet("Neptune", "azure blue", 11.15, mass)};
/*	planets[0]("Mercury", "dark grey", 3.7, mass);
	planets[1]("Venus", "yellowish white/reddish brown", 8.87, mass);
	planets[2]("Earth", "blueish white", 9.81, mass);
	planets[3]("Mars", "red", 3.711, mass);
	planets[4]("Jupiter", "yellow", 24.79, mass);
	planets[5]("Saturn", "bluish", 10.44, mass);
	planets[6]("Uranus", "blue", 8.69, mass);
	planets[7]("Neptune", "azure blue", 11.15, mass);*/
	while(1) {
		cout << "Which planet do you want to visit?" << endl;
		cout << "(Please enter in the format: Earth)" << endl;
		cout << "to exit, type exit" << endl;
		cin >> name;
		if (name != "exit") {
			for(i = 0; i < 1; i++) {
				planets[i] = new Planet("abc", "abc", 1.1, mass);
				if(planets[i].planet_name(name)) {
					count++;
					planets[i].display_Information();
					break;
				}
			}
			if(!count) {
				cout << "Planet not found, enter planet name again." << endl;
			}
		}
		else {
			break;
		}
	}
	return 0;
}	
