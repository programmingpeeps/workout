let component = ReasonReact.statelessComponent "Exercise";

let set1: Types.set = {
    weight: 100.0,
    reps: 5
};

let set2: Types.set = {
    weight: 100.0,
    reps: 5
};

let set3: Types.set = {
    weight: 100.0,
    reps: 7
};

let exercise: Types.exercise = {
    name: "Squats",
    sets: [set1, set2, set3]
};

let make _children => {
  ...component,
  render: fun self =>
/*    List.map setToString sets */
    <div> (ReasonReact.stringToElement "") </div>
};