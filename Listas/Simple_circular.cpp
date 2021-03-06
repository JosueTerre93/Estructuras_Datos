#include <iostream>

using namespace std;

class Node
{
    public:
            int data;
            Node *next;

            Node(int newData)
            {
                this -> data = newData;
                this -> next = NULL;
            }
};

class List
{
    public:

            Node *first;
            Node *last;

            List()
            {
                this -> first = NULL;
                this -> last = NULL;
            }

            void add(int newValue)
            {
                Node *newNode = new Node(newValue);

                if (first == NULL)
                {
                    first = newNode;
                    last = newNode;
                    last -> next = first;
                }
                else
                {
                    last -> next = newNode;
                    last = newNode;
                    last -> next = first;
                }
                
            }

            void PlotData()
            {
                if (first == NULL)
                {
                    cout<<"Empty list !!!"<<endl;
                }
                else
                {
                    Node *temp = this -> first;

                    while (temp -> next != first)
                    {
                        cout << "[";
                        cout << temp -> data;
                        cout << "| ]";
                        cout << "--> ";

                        temp = temp -> next;
                    }
                    
                        cout << "[";
                        cout << temp -> data;
                        cout << "| ]";
                        cout << "--> ";
                        cout << temp -> next -> data << endl;
                }
                
            }

            void Search(int parameter)
            {
                Node *temp = this -> first;
                bool match=false;
                int index=0;

                while(temp != NULL)
                {
                    index++;

                    if (temp -> data == parameter)
                    {
                        match = true;
                        break;
                    }
                    else
                    {
                        temp = temp -> next;
                    }
                    
                } ;

                if (match)
                {
                    cout << "Data finded in position ";
                    cout << index;
                }
                else
                {
                    cout << "Data not found.";
                }
                
            }
};

int main()
{
    List *numberList = new List();

    numberList -> add(10);
    numberList -> add(52);
    numberList -> add(35);
    numberList -> add(46);
    numberList -> add(56);
    numberList -> add(123);
   
    numberList -> PlotData();

    numberList -> Search(123);

    return 0;
}
