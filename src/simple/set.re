let component = ReasonReact.statelessComponent "Set";

let setToString (set: Types.set) => {
  "weight: " ^ (string_of_float set.weight) ^ " " ^
  "reps: " ^ (string_of_int set.reps)
};

let make ::set _children => {
  ...component,
  render: fun self =>
    <div> (ReasonReact.stringToElement (setToString set)) </div>
};