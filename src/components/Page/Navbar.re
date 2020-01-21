open NavbarStyles;

type state = {menuIsActive: bool};

type action =
  | ToggleMenu;

[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | ToggleMenu => {
            //  opposite of current state
            menuIsActive: !state.menuIsActive,
          }
        },
      {menuIsActive: false},
    );

  <nav className="hero-head">
    <nav id="topnav" className=topNavStyles>
      <div className="container">
        <div className=navbarBrand>
          <Next.Link href="/">
            // custom styles - from NavbarStyles - implementation

              <a className=subtitle>
                {ReasonReact.string(
                   "Up and running from Reason React and NextJS",
                 )}
              </a>
            </Next.Link>
          /* TODO implement <span className=navbarBurger> below */
          <span className={navbarBurger(state.menuIsActive)}>
            <span />
            <span />
            <span />
          </span>
        </div>
        <div id="navbarMenu" className={navbarMenu(state.menuIsActive)}>
          <div className="navbar-end">
            <div className=navbarItem>
              <Next.Link href="/about">
                <a> {ReasonReact.string("About")} </a>
              </Next.Link>
            </div>
            <div className=navbarItem>
              <Next.Link href="/contact">
                <a> {ReasonReact.string("Contact")} </a>
              </Next.Link>
            </div>
          </div>
        </div>
      </div>
    </nav>
  </nav>;
};