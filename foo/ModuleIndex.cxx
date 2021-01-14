#include "ModuleIndex.h"
// #include <boost/format.hpp> // not very snprintf-compatible. 
#include <string.h>
#include <string>
std::string ModuleIndex::getPath() const
{
  char buf[200];
  
  snprintf(buf, 200, "/sfp_%01d/febex_%02d/", this->getSFP(), this->getMod());
  /*return (boost::format("/sfp_%01d/febex_%02d/")
	  % this->getSFP()
	  % this->getMod()
	  //	    % this->getCh()
	  ).str();*/
  return std::string(buf);
}

std::string ModuleIndex::toString() const
{
  char buf[200];
  snprintf(buf, 200, "_%01d_%02d_%02d", this->getSFP(), this->getMod(),  this->getCh());
  return std::string(buf);

}



const ModuleIndex ModuleIndex::ANY(ModuleIndex::ANY_);
const ModuleIndex ModuleIndex::INVALID(ModuleIndex::INVALID_);
