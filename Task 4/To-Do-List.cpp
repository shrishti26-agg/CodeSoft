#include<iostream>
using namespace std;

const int MAX = 100;
string tasks[MAX];
bool completed[MAX];
int count = 0;

void addTask(){
    if(count >= MAX)
     return;
    cout<<"Enter task:";
    getline(cin,tasks[count]);
    completed[count++] = false;
    cout<<"Task added!"<<endl;
}

void viewTask(){
    if(count == 0){
        cout<<"No task!"<<endl;
         return;
    }
    for(int i=0;i<count;++i)
    cout<<i+1<<". " <<tasks[i]<<"["<<(completed[i] ? "done" : "Pending") << "]"<<endl;
}

void markComplete(){
    int i;
    cout<<"Task number to complete:";
    cin>>i;
    cin.ignore();
      if(i>=1 && i<=count)
      completed[i -1] = true;
}

void removeTask(){
    int i;
    cout<<"Task number to remove";
    cin>>i;
    cin.ignore();
     if(i<1 || i>count)
     return;
     for(int j= i-1; j<count-1;++j){
        tasks[j] = tasks[j+1];
        completed[j] = completed[j -1];
     }
     count--;
     cout<<"Task removed!"<<endl;
}

int main(){
    int choice;

    do{
        cout<<" \n1.Add 2.view 3. complete 4.Remove 5.Exit\nChoose:";
        cin>>choice;
        cin.ignore();
          if(choice == 1)
          addTask();
          else if(choice == 2)
          viewTask();
          else if(choice == 3)
          markComplete();
          else if(choice == 4)
          removeTask();
    }

    while(choice != 5);
    return 0;


}

