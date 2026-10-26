function DisplayFactors(ino)
 {
  let iCnt = 0;

  console.log("factors of :", ino);

  for (iCnt = 1; iCnt <= ino / 2; iCnt++)
     {
    if (ino % iCnt == 0) {
      console.log(iCnt);
    }
  }
}

function main()
 {
  DisplayFactors(12);
}
main();
