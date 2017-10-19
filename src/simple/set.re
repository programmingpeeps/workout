let component = ReasonReact.statelessComponent "Set";

let setToString (set: Types.set) => {
  <dl>
  <dt>(ReasonReact.stringToElement "weight")</dt>
  <dd>(ReasonReact.stringToElement (string_of_float set.weight))</dd>
  <dt>(ReasonReact.stringToElement "reps")</dt>
  <dd>(ReasonReact.stringToElement (string_of_int set.reps))</dd>
  </dl>
};

let make ::set _children => {
  ...component,
  render: fun self =>
    <div> (setToString set) </div>
};