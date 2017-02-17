#include "TextQuery.h"

std::set<TextQuery::line_no> TextQuery::run_query(const std::string &search_item) const
{
	// Note: must use find and not subscript the map directly
	// to avoid adding words to word_map!
	// 应该没有Primer中的写法时间复杂度低
	if (word_map.count(search_item))
		// fetch and return set of line numbers for this word
		return word_map.find(search_item)->second;
	return std::set<line_no>();		// not found, return empty set
}

std::string TextQuery::text_line(line_no line_num) const
{
	if (line_num < lines_of_text.size())
		return lines_of_text[line_num - 1];
	throw std::out_of_range("line number out of range");
}

// read input file: store each line as element in lines_of_text
void TextQuery::store_file(std::ifstream &ifs)
{
	std::string line;
	while (std::getline(ifs, line))
		lines_of_text.push_back(line);
}

// finds whitespace-separated words in the input vector
// and puts the word in word_map along with the line number
void TextQuery::build_map()
{
	// process each line from the input vector
	std::vector<std::string>::iterator bg = lines_of_text.begin(), ed = lines_of_text.end();
	line_no line_num = 1;
	while (bg != ed)
	{
		// we'll use line to read the text a word at a time
		std::istringstream iss(*bg++);
		std::string word;
		while (iss >> word)
			// add this line number to the set;
			word_map[word].insert(line_num);
		++line_num;
	}
}