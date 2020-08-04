import unittest
from gradescope_utils.autograder_utils.decorators import weight, tags
import subprocess

def sanatize(output):
    return output.lower().replace("please enter 4 positive integers, separated by a space:","").replace("\n"," ").lstrip().rstrip().replace("  ", " ")


class TestIntegration(unittest.TestCase):
		def setUp(self):
				pass

		@weight(2)
		@tags("integration")
		def test_sample1(self):
				"""Evaluating Test 1 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("2 3 5 7\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "more odds")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample2(self):
				"""Evaluating Test 2 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("59 95 101 103\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "more odds")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample3(self):
				"""Evaluating Test 3 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("94 2 4 6\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "more evens")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample4(self):
				"""Evaluating Test 4 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("8 6 4 2\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "more evens")
				mytest.terminate()

		@weight(2)
		@tags("integration")
		def test_sample5(self):
				"""Evaluating Test 5 Output"""
				mytest = subprocess.Popen('./a.out'.split(),stdin=subprocess.PIPE, stdout=subprocess.PIPE, encoding='utf8')
				output, err = mytest.communicate("96 94 93 95\n", 1)
				olower = sanatize(output)
				self.assertEqual(olower, "same number of evens and odds")
				mytest.terminate()
