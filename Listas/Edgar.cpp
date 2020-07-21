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
                }
                else
                {
                    last -> next = newNode;
                    last = newNode;
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

                    while (temp -> next != NULL)
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
                        cout << "--> NULL";
                }
                
            }
};

int main()
{
    List *numberList = new List();

    numberList -> add(1);
    numberList -> add(2);
    numberList -> add(3);
    numberList -> add(4);
    numberList -> add(5);
    numberList -> add(6);

    numberList -> PlotData();

    return 0;
}
