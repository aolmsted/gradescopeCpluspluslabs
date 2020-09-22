#include <string>

using namespace std;

class NODE {
public:
    string firstname;
    string lastname;
    string email;
    NODE* next;
};

void add_node_tail(NODE** data, string firstname,string lastname, string email);

