import unittest
from gradescope_utils.autograder_utils.decorators import weight
import subprocess


class TestDiff(unittest.TestCase):
    def setUp(self):
        pass

    @weight(2)
    def test_2000(self):
        """Evaluating 2000 Test """
        testsub = subprocess.Popen(["./a.out", "2000"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, encoding='utf8')
        output = testsub.stdout.read().strip()
        self.assertEqual(output, "2000 was a leap year")
        testsub.terminate()

    @weight(2)
    def test_2018(self):
        """Evaluating 2018 Test """
        testsub = subprocess.Popen(["./a.out", "2018"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, encoding='utf8')
        output = testsub.stdout.read().strip()
        self.assertEqual(output, "2018 was not a leap year")
        testsub.terminate()
        
    @weight(2)
    def test_1900(self):
        """Evaluating 1900 """
        testsub = subprocess.Popen(["./a.out", "1900"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, encoding='utf8')
        output = testsub.stdout.read().strip()
        self.assertEqual(output, "1900 was not a leap year")
        testsub.terminate()
        
    @weight(2)
    def test_2004(self):
        """Evaluating 2004 Test """
        testsub = subprocess.Popen(["./a.out", "2004"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, encoding='utf8')
        output = testsub.stdout.read().strip()
        self.assertEqual(output, "2004 was a leap year")
        testsub.terminate()

    @weight(2)
    def test_2012(self):
        """Evaluating 2012 Test """
        testsub = subprocess.Popen(["./a.out", "2012"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, encoding='utf8')
        output = testsub.stdout.read().strip()
        self.assertEqual(output, "2012 was a leap year")
        testsub.terminate()
       
       

