#include "stdafx.h"
#include <iostream>
#include "attack.h"
#include "person.h"
#include "WeightEntry.h"

using namespace std;

void someMethod(shared_ptr<Resource> res);

/**
 * Comment out the argc and argv, so we don't get
 * any compiler warnings.
 * @brief main
 * @return
 */
int main(int argc, char *argv[])
{
    Person person("Mismis");
    person.AddWeightLog(WeightEntry(90, "04-03-3017"));
    person.AddWeightLog(WeightEntry(92, "04-02-3017"));
    person.AddWeightLog(WeightEntry(94, "04-01-3017"));
    cout << person.getWeights() << endl;

	// Smart Pointers
	person.AddReource();
	cout << "Resource str person: " << person.GetRecourceStr() << endl;
	// Copy
	Person person2 = person;
	person2.SetName("Person 2");
	person2.AddReource();
	// Person 2 pResource
	cout << "Resource str person2: " << person2.GetRecourceStr() << endl;

	// Person pResource
	cout << "Resource str person: " << person.GetRecourceStr() << endl;


	// SP
	shared_ptr<Resource> pResource(new Resource("Hello pRes"));
	cout << "Old value pRes: " << pResource->GetReourceStr() << endl;
	someMethod(pResource);
	cout << "New value pRes: " << pResource->GetReourceStr() << endl;

	Resource resource("Hello res");
	cout << resource.GetReourceStr() << endl;

	// Press Enter to exit message, so we can se the output
	cout << "Press Enter to exit" << endl;
	getchar();
    return 0;
}

/*
Takes a shared_ptr as argument, mortifying the org. value
*/
void someMethod(shared_ptr<Resource> res)
{
	res->SetResourceStr("New value for str");
}

/*
* Old code for keeping :)
*/

void oldCodeFOrKeeping()
{
	cout << "Init Attack log" << endl;
	Attack attack;
	attack.addAttack("127.0.0.1", "Dos");
	attack.addAttack("192.168.1.1", "?");
	for (auto log : attack.getLogs())
	{
		cout << log << endl;
	}
	cout << "End";
}
