#include <string>

#include "Minutes.h"
#include "AddAnnotationVisitor.h"

Minutes::Minutes(std::string name, std::string dateTime)
	: AbsDocument(name, dateTime)
{
}

Minutes* Minutes::clone(void) const
{
	// └ complÚter pour construire un nouvel objet Minutes en appelant le constructeur de copie
	Minutes* minutes = new Minutes(m_name, getDateTime());
	return minutes; // └ remplacer
}

AbsDirectoryComponent& Minutes::accept(AddAnnotationVisitor& v) const
{
	return v.processMinutes(*this);
}