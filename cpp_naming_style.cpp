//VARIABLES
//****************************************************************************

int price_count_reader;    // No abbreviation.
int num_errors;            // "num" is a widespread convention.
int num_dns_connections;   // Most people know what "DNS" stands for.
string table_name;  // OK - uses underscore.
string tablename;   // OK - all lowercase.
//CLASS DATA VARIABLES
a_local_variable, a_struct_data_member, a_class_data_member_
//CONST BEGIN WITH K
const int kDaysInAWeek = 7;

//FILE NAMES
//****************************************************************************
Examples of acceptable file names:
my_useful_class.cc
my-useful-class.cc
myusefulclass.cc
myusefulclass_test.cc // _unittest and _regtest are deprecated.

//HEADER GUARD
//****************************************************************************
#ifndef FOO_BAR_BAZ_H_
#define FOO_BAR_BAZ_H_

...

#endif  // FOO_BAR_BAZ_H_

//TYPES - CLASSES STRUCTS ENUMS
//****************************************************************************
// classes and structs
class UrlTable { ...
class UrlTableTester { ...
struct UrlTableProperties { ...

// typedefs
typedef hash_map<UrlTableProperties *, string> PropertiesMap;

// using aliases
using PropertiesMap = hash_map<UrlTableProperties *, string>;

// enums
enum UrlTableErrors { ...

//CLASS MEMBERS
class TableInfo {
  ...
 private:
  string table_name_;  // OK - underscore at end.
  string tablename_;   // OK.
  static Pool<TableInfo>* pool_;  // OK.
};

//STRUCT MEMBERS
//****************************************************************************
struct UrlTableProperties {
  string name;
  int num_entries;
  static Pool<UrlTableProperties>* pool;
};

//ENUM NAMES
//****************************************************************************
enum UrlTableErrors {
  kOK = 0,
  kErrorOutOfMemory,
  kErrorMalformedInput,
};
enum AlternateUrlTableErrors {
  OK = 0,
  OUT_OF_MEMORY = 1,
  MALFORMED_INPUT = 2,
};

//FUNCTIONS
//****************************************************************************
AddTableEntry()
DeleteUrl()
OpenFileOrDie()
//GET AND SET FUNCTIONS MUTATORS
void set_count(int count)

//NAMESPACE-ALL LOWER CASE NO ABBREV
//****************************************************************************

//MACRO NAMES-avoid if possible
//****************************************************************************
#define ROUND(x) ...
#define PI_ROUNDED 3.0
//EXCEPTIONS
//If you are naming something that is analogous to an existing C or C++ entity 
//then you can follow the existing naming convention scheme.
bigopen()
function name, follows form of open()
uint
typedef
bigpos
struct or class, follows form of pos
sparse_hash_map
STL-like entity; follows STL naming conventions
LONGLONG_MAX
a constant, as in INT_MAX

//COMMENTS
//****************************************************************************
Every non-obvious class declaration should have an accompanying comment that 
describes what it is for and how it should be used.
// Iterates over the contents of a GargantuanTable.
// Example:
//    GargantuanTableIterator* iter = table->NewIterator();
//    for (iter->Seek("foo"); !iter->done(); iter->Next()) {
//      process(iter->key(), iter->value());
//    }
//    delete iter;
class GargantuanTableIterator {
  ...
};
The class comment should provide the reader with enough information to know how 
and when to use the class, as well as any additional considerations necessary 
to correctly use the class. Document the synchronization assumptions the 
class makes, if any. If an instance of the class can be accessed by multiple 
threads, take extra care to document the rules and invariants surrounding 
multithreaded use. The class comment is often a good place for a small example
code snippet demonstrating a simple and focused usage of the class. When 
sufficiently separated (e.g. .h and .cc files), comments describing the use of 
the class should go together with its interface definition; comments about the 
class operation and implementation should accompany the implementation 
of the class's methods.

// Returns an iterator for this table.  It is the client's
// responsibility to delete the iterator when it is done with it,
// and it must not use the iterator once the GargantuanTable object
// on which the iterator was created has been deleted.
//
// The iterator is initially positioned at the beginning of the table.
//
// This method is equivalent to:
//    Iterator* iter = table->NewIterator();
//    iter->Seek("");
//    return iter;
// If you are going to immediately seek to another place in the
// returned iterator, it will be faster to use NewIterator()
// and avoid the extra seek.
Iterator* GetIterator() const;

//VARIABLE COMMENTS
//****************************************************************************
Class Data Members
private:
 // Used to bounds-check table accesses. -1 means
 // that we don't yet know how many entries the table has.
 int num_total_entries_;
//GLOBAL VARIABLES
// The total number of tests cases that we run through in this regression test.
const int kNumTestCases = 6;

//SPACING
//****************************************************************************
Use only spaces, and indent 2 spaces at a time.
We use spaces for indentation. Do not use tabs in your code. You should set 
your editor to emit spaces when you hit the tab key.














