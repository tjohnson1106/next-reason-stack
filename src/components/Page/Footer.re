let str = React.string;

module Styles = {
  open Css;

  let footerStyles =
    merge([style([background(rgb(244, 244, 244))]), "footer"]);
};

[@react.component]
let make = () => {
  <footer className=Styles.footerStyles>
    <div className="content has-text-centered">
      <p>
        <strong> {"Reason Stack Blog " |> str} </strong>
        {"Made with ReasonML, ReasonReact and NextJS" |> str}
      </p>
    </div>
  </footer>;
};