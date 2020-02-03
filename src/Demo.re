Js.log("Hello, BuckleScript and Reason!");

let greeting = "Good morning";

let greetUser = (name) => {
  greeting ++ name;
}

let greetUserEvening = (name) => {
  {j|Good evening, $(name)|j};
}

// https://github.com/reasonml-community/bs-express
// I guess this could work.


/*
What I want to do...

1. Add bs-express
2. Set up a simple server with one route / which returns "Hello World"
3. Add it to that repo as an example
4. Figure out how to accept a query
5. Figure out how to redirect the user to a different URL

*/