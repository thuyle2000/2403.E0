// import logo from './logo.svg';
import { Routes, Route, Link, Outlet } from 'react-router-dom'
import './App.css';
import BookCreate from './pages/book-create';
import BookView from './pages/book-view';
import data from './data.json'


function App() {
  const menu = {
    padding: '20px',
    textDecoration: "none",
    fontSize: "1.1em"
  }


  return (
    <div className="App">
      <header className="App-header">
        <h3 className='mt-5'>Books Control Panel</h3>
        <nav>
          <Link to='/' className="menuItem"> Home </Link>
          <Link to='book-view' className='menuItem'> View </Link>
          <Link to='book-create' className='menuItem'>Create</Link>
        </nav>

      </header>

      <section>


        <Routes>
          <Route path='book-view' element={<BookView dbs={data} />} />
          <Route path='book-create' element={<BookCreate dbs={data} />} />
        </Routes>

        <Outlet />
      </section>

    </div>
  );
}

export default App;
