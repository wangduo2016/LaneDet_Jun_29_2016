#pragma once
#include "Message.h"

class Folder {
public:
	void addMsg(const Message*);
	void remMsg(const Message*);
private:
	set<Message*> message;
};