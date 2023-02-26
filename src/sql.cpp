#include “sqlite3.h”
#include "ltQuery.h"
#include "ltDriver.h"

ltDriver *db = new ltDriver();
ltQuery *Query = new ltQuery();
db->Attach("SimChats.db");
Query->Open( db->db );
Query->Sel("SELECT * FROM NAME");

for( int i = 0; i < Query->Columns(); i++ )
printf(" %s ",Query->Name(i) );
printf("\n campos= %d\n", Query->Columns() );

while( Query->Fetch() )
{
for( int i = 0; i < Query->Columns(); i++ )
printf(" %s ",Query->Text(i) );
printf(" %d ",Query->Int(1) );
printf("\n");
}

db->Detach();
//delete Query;
//delete db;