[@react.component]
let make = () => {
  <nav className="hero-head">
    <nav id="topnav" className="navbar main-title">
      <div className="container">
        <div className="navbar-brand">
          <Next.Link href="/">
            <a className="subtitle">
              {ReasonReact.string("BracketFactory")}
            </a>
          </Next.Link>
          <span className="navbar-burger burger">
            <span />
            <span />
            <span />
          </span>
        </div>
        <div id="navbarMenu" className="navbar-menu">
          <div className="navbar-end">
            <div className="navbar-item">
              <Next.Link href="/about">
                <a> {ReasonReact.string("About")} </a>
              </Next.Link>
            </div>
            <div className="navbar-item">
              <Next.Link href="/contact">
                <a> {ReasonReact.string("contact")} </a>
              </Next.Link>
            </div>
          </div>
        </div>
      </div>
    </nav>
  </nav>;
};