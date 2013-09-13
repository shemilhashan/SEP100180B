#include "connectDB.h"
#include <stdlib.h>
#include <iostream>
/*
  Include directly the different
  headers from cppconn/ and mysql_driver.h + mysql_util.h
  (and mysql_connection.h). This will reduce build time!
*/
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

connectDB::connectDB()
{

}
connectDB::connectEstd(){
    driver = get_driver_instance();
  con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
  /* Connect to the MySQL test database */
  con->setSchema("test");
  stmt = con->createStatement();
  res = stmt->executeQuery("SELECT 'Open Office Predictive text' AS _message");
  while (res->next()) {
    cout << "\t... word reply: ";
    cout << res->getString("_message") << endl;
    cout << "\t... more reply: ";
    cout << res->getString(1) << endl;
  }
   delete res;
  delete stmt;
  delete con;
  } catch (sql::SQLException &e) {
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line " »
     << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();
  cout << ", SQLState: " << e.getSQLState() << " )" << endl;
}


}


