#ifndef DEMOG_H
#define DEMOG_H

#include <string>
#include<iostream>

using namespace std;

/*
  class to represent county demographic data
  from CORGIS
*/
class demogData {
  public:
    demogData(string inN, string inS, double in65, double in18,
        double in5, int totPop14) :
            name(inN), state(inS), popOver65(in65), popUnder18(in18),
            popUnder5(in5), totalPopulation2014(totPop14), undergrad(0), highschool(0) {}
    demogData(string inN, string inS, double in65, double in18,
        double in5, double bach, double high, int totPop14) :
            name(inN), state(inS), popOver65(in65), popUnder18(in18),
            popUnder5(in5), totalPopulation2014(totPop14), undergrad(bach), highschool(high) {}

    string getName() const { return name; }
    string getState() const { return state; }
    int getHSupCount() const { return (int)(highschool * totalPopulation2014 * .01); }
    int getBAupCount() const { return (int)(undergrad * totalPopulation2014 * .01);}
    int getpopUnder5Count() const { return (int)(popUnder5 * totalPopulation2014 * .01); }
    int getpopUnder18Count() const { return (int)(popUnder18 * totalPopulation2014 * .01); }
    int getpopOver65Count() const { return (int)(popOver65 * totalPopulation2014 * .01); }
    double getHSup() const { return highschool; }
    double getBAup() const { return undergrad; }
    double getpopUnder5() const { return popUnder5; }
    double getpopUnder18() const { return popUnder18; }
    double getpopOver65() const { return popOver65; }
    int getPop() const { return totalPopulation2014; }

   friend std::ostream& operator<<(std::ostream &out, const demogData &DD);

private:
    const string name;
    const string state;
    const double popOver65;
    const double popUnder18;
    const double popUnder5;
    const double undergrad;
    const double highschool;
    const int totalPopulation2014;
};
#endif
