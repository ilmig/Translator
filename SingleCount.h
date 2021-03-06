#ifndef __SINGLECOUNT_H__
#define __SINGLECOUNT_H__
#include "constants.h"
#include <vector>
using namespace std;
class SingleCount
{
	private:
		vector<unsigned int> wordcounts;
	public:
		inline SingleCount()
		{
			vector<unsigned int> wordcounts(VECTOR_INIT_SIZE, 0);
		}
		inline void insert(unsigned int word)
		{
			if (word >= wordcounts.size())
			{
				wordcounts.resize(wordcounts.size() + VECTOR_RESIZE);
			}
			wordcounts[word]++;
		}
		inline unsigned int getFreq(unsigned int word)
		{
			return wordcounts[word];
		}
		inline unsigned int getSize()
		{
			return wordcounts.size();
		}
};

#endif
