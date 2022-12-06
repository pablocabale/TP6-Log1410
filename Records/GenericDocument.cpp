// GenericDocument.cpp : � COMPL�TER

#include "GenericDocument.h"

GenericDocument::GenericDocument(std::string name, std::string dateTime, std::string description) 
	: AbsDocument(name, dateTime), m_description(description)
{
}

GenericDocument* GenericDocument::clone() const
{
	// � compl�ter pour construire un nouvel objet GenericDocument en appelant le constructeur de copie
	GenericDocument* genericDocument = new GenericDocument(m_name, getDateTime(), m_description);
	return genericDocument; // � remplacer
}