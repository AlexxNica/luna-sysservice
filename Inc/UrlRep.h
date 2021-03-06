/**
 *  Copyright (c) 2010-2013 LG Electronics, Inc.
 * 
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


#ifndef URLREP_H
#define URLREP_H

#include <string>
#include <map>

// Broken down representation of a url
struct UrlRep
{
	static UrlRep fromUrl(const char* uri);
	UrlRep() : valid(false) {}
	bool valid;
	std::string scheme;
	std::string userInfo;
	std::string host;
	std::string port;
	std::string path;
	std::string pathOnly;
	std::string resource;		//The path = pathOnly + "/" + resource
	std::map<std::string,std::string> query;
	std::string fragment;
};

std::string unescape(const std::string& encoded);
std::string escape(const std::string& source);

#endif /* URLREP_H */
