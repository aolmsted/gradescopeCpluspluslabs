#include <string>

using namespace std;

class NODE {
public:
    string firstname;
    string lastname;
    string email;
    NODE* next;
};

void csv_import2(NODE** data, string filename);


