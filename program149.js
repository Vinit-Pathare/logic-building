function SumFactors(ino) 
{
  let iCnt = 0;
  let iSum = 0;

  for (iCnt = 1; iCnt <= ino / 2; iCnt++) {
    if (ino % iCnt == 0) {
      iSum = iSum + iCnt;
    }
  }
  return iSum;
}

function main() 
{
  let iRet = 0;
  iRet = SumFactors(12);

  console.log("summation of factors : ", iRet);
}
main();
