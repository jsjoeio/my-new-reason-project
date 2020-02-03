Js.log("Hello, BuckleScript and Reason!");

let greeting = "Good morning";

let greetUser = (name) => {
  greeting ++ name;
}

let greetUserEvening = (name) => {
  {j|Good evening, $(name)|j};
}

