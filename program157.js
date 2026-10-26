class Demo 
{
  constructor() 
  {
    console.log("inside constructor");
  }
}

function main() 
{
  dobj = new Demo();
  dobj = new Demo();
}

main();
