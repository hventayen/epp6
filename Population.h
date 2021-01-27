/*
I use Double Linked List.I will be able to use an iterator so that I can
keep it in order as a list. Each node will hold an object that has it's own
data from a struct that gets its information when the readFile() function is
read. The iterator will start at the front of the list, where the function
averagePopulation() will iterate through the list and get all the population
numbers from each node and get the average.For the default constructor
its purpose is to call readFile() since the object will get its data from there.
The readFile() will get the info from the file, making a new object every time
and adding it to the double linked list.
*/

#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "part2.cpp"

struct pop
{
  std::string name;
  int year;
  int population;
};
class Population
{
private:
  std::vector<pop> populationDatabase;
  //pop stats;

public:
  Population()
  {
    //populationDatabase = pop;
  };
  void readFile(std::string filename)
  {
    /*
    std::ifstream populationList;
    //Open file
    populationList.open(filename);
    //Make sure file is open
    if (!populationList.is_open())
    {
      std::cout << "Could not open." << std::endl;
    }
    //Read data in
    while(!populationList.eof())
    {
      populationList >> stats.name >> stats.year >> stats.population;
      //Push values into vector
      populationDatabase.push_back(stats);
    }
    //Close file
    populationList.close();
    */
    //Print data in vector list (check)
    /*
    std::vector<populations>::iterator it;
    for (it = populationDatabase.begin(); it != populationDatabase.end(); it++)
    {
      std::cout << it->name << it->year << it->population << std::endl;
    }
    */

  };
  //Calculates average Population
  double averagePopulation(std::string pop)
  {
    /*
    double totalPop = 0.0;
    int popCount = 0;
    double avg = 0.0;
    std::vector<populations>::iterator it;
    for (it = populationDatabase.begin(); it != populationDatabase.end(); it++)
    {
      totalPop += it->population;
      popCount++;
    }
    avg = totalPop/popCount;
    */
    return 0.0;
  };
};
/*
struct Population::NodeStruct
{
  std::string name;
  int year;
  int population;
};

class Population
{
private:
  struct NodeStruct;
  NodeStruct * object;
  std::list<NodeStruct> list;
  std::list<NodeStruct> Iterator it;
public:
  Population();
  void readFile(const std::string & filename);
  double averagePopulation(const std::string & county)
  void addToList(NodeStruct object)
  {
    list.push_back(object);
  }
};

Population::Population()
{
  object->name = "";
  object->year = 0;
  object->population = 0;
  readFile(file);
}
void Population::readFile(const std::string & filename)
{
  std::string n;
  int y;
  int p;
  std::ifstream populationList;
  populationList.open(filename);
  if (populationList)
  {
    while (filename >> n >> y >> p)
    {
      object->name = n;
      object->year = y;
      object->population = p;
      list.addToList(object)

    }
    populationList.close(filename);
    it = list.begin();
  }
  else
  {
    std::cout << "Could not open";
  }
}
double Population::averagePopulation(const std::string &  qcounty)
{
  double pop;
  double average;
  int count = 0;
  for (it = list.begin(); it != list.end(); ++it)
  {
    pop += it->population;
    count++;
  }
  average = pop/count;
  return average;
}
*/
