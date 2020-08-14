import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess

def sanatize(output):
    return output.lower().replace("enter an odd length string:","").replace("\n"," ").lstrip().rstrip().replace("  ", " ")


class TestIntegration(unittest.TestCase):
		def setUp(self):
				pass

		@weight(2)
		@tags("integration")
		def test_sample1(self):
				"""Evaluating Test 1 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("Fortune favors the bold\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "middle character: o first half: fortune fav second half: rs the bold")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample2(self):
				"""Evaluating Test 2 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("abcde\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "middle character: c first half: ab second half: de")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample3(self):
				"""Evaluating Test 3 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("abc\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "middle character: b first half: a second half: c")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample4(self):
				"""Evaluating Test 4 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("abcdefg\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "middle character: d first half: abc second half: efg")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample5(self):
				"""Evaluating Test 5 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("python3 is easy\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "middle character:  first half: python3 second half: is easy")
				mytest.terminate()